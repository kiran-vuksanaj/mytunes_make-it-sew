#include<stdio.h>
#include<stdlib.h>

#include<string.h>

#include"library.h"
#include"llist.h"

void insert_song(char * name, char * artist, struct song_node ** lib) {
  char index = artist[0] - 'a';
  if(index < 0 || index >= 26) index = 26; // the default other index
  struct song_node * list = lib[index];
  sort_in(name, artist, list);
}

void print_letter(char letter, struct song_node ** lib) {
  char index = letter - 'a';
  if(letter == 'z'+1) letter = '%'; // just for printing purposes, other symbol will be printed with %
  if(index < 0 || index >= 26) index = 26; // the default exterior letter
  printf("[%c]:\n\t", letter);
  struct song_node * list = lib[index];
  print_list(list);
  printf("\n");
}

void print_lib(struct song_node ** lib) {
  int i;
  printf("[library @%p] \n",lib);
  for (i = 0; i < 27; i++) {
    char letter = i + 'a';
    if(lib[i]) print_letter(letter, lib);
  }
  printf("[end library]\n");
}
