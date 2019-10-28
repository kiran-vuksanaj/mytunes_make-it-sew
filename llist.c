#include<stdio.h>
#include<stdlib.h>

#include"llist.h"


struct song_node *insert_front(char * name, char * artist, struct song_node * list) {
  struct song_node *new_front = malloc( sizeof(struct song_node) );
  new_front -> name = name;
  new_front -> artist = artist;
  // they're pointers to strs so strcpy is not necessary
  new_front -> next = list;
}
