#include<stdio.h>
#include<stdlib.h>

#include<string.h>

#include"library.h"
#include"llist.c"

void * insert_song(char * name, char * artist, struct song_node ** lib) {
  int list_num = int(artist[0]) - 65;
  struct song_node * list = lib[list_num];
  sort_in(name, artist, list);
}

void * print_lib(struct song_node ** lib) {
  int i;
  for (i = 0; i < 26; i++) {
    char letter = i + 65;
    printf("%c list\n", letter);
    struct song_node * list = lib[i];
    while (list != NULL) {
      printf(" %s: %s | ", list->artist, list->name);
      list = list->next;
    }
    printf("\n");
  }
}
