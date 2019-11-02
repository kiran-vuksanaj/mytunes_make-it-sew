#include<stdio.h>
#include<stdlib.h>

#include<string.h>

#include"library.h"
#include"llist.h"

void insert_song(char * name, char * artist, struct song_node ** lib) {
  char index = artist[0] - 'a';
  if(index < 0 || index >= 26) index = 26; // the default other index
  lib[index] = sort_in(name, artist, lib[index]);
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

void zero_lib(struct song_node ** lib) {
  short i;
  for(i=0;i<27;i++){
    lib[i] = NULL;
  }
}

void clear_lib(struct song_node ** lib) {
  short i;
  for(i=0;i<27;i++){
    lib[i] = free_list(lib[i]);
  }
}

struct song_node *rand_song_libn(struct song_node **lib, size_t *lengths, size_t total) {
  // assumed: lengths is 27 size_t's long

  // weighted chance of choosing any given array
  size_t letter_determiner = rand() % total;
  // printf("{size=%lu, determiner=%lu}\n",total,letter_determiner);
  short i = 0;
  size_t n = 0;
  while(i++ < 27 && n < letter_determiner) {
    n += lengths[i];
  }
  i--; // counteract the last ++
  return rand_songn(lib[i],lengths[i]);
}

struct song_node *shuffle(struct song_node **lib, size_t n) {
  size_t lengths[27];
  size_t total = 0;
  short i;
  for(i=0;i<27;i++){
    lengths[i] = length_list(lib[i]);
    total += lengths[i];
  }

  // print_lib(lib);
  print_node(rand_song_libn(lib,lengths,total));
  printf("\n");
}
