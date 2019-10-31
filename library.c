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
