#include<stdio.h>
#include<stdlib.h>

#include<string.h>

#include"library.h"
#include"llist.h"

void insert_song(char * name, char * artist, struct song_node ** lib) {
  int list_num = (int)(artist[0]) - 97;
  struct song_node * list = lib[list_num];
  sort_in(name, artist, list);
}

void print_letter(char * letter, struct song_node ** lib) {
  printf("%c list\n", letter);
  int i = (int)(letter) - 97;
  struct song_node * list = lib[i];
  print_list(list);
}

void print_lib(struct song_node ** lib) {
  int i;
  for (i = 0; i < 26; i++) {
    char letter = i + 97;
    print_letter(letter, lib);
  }
}
