#include<stdio.h>
#include<stdlib.h>

#include<string.h>

#include"llist.h"

int songcmp(struct song_node *a, struct song_node *b){
  // null is equivalent to greatest possible
  // since it goes to the end of the list
  if( !a && !b ) return 0;
  if( !a ) return 1;
  if( !b ) return -1;
  // REPLACE WITH PROPER ALPHABETIZATION!!!
  // currently only works properly on lowercase
  int out = strcmp(a -> artist, b -> artist);
  // if the strings are equal, proceed to song, return this result
  if(!out){
    return strcmp(a -> name, b -> name);
  }else{
    return out;
  }
}

struct song_node *insert_front(char * name, char * artist, struct song_node * list) {
  struct song_node *new_front = malloc( sizeof(struct song_node) );
  new_front -> name = malloc( strlen(name) );
  strcpy(new_front -> name,name);
  new_front -> artist = malloc( strlen(name) );
  strcpy(new_front -> artist,artist);
  // they're pointers to strs so strcpy is not necessary
  new_front -> next = list;
  return new_front;
}

struct song_node *sort_in(char * name, char * artist, struct song_node * list) {
  struct song_node *newsong = malloc( sizeof(struct song_node) );
  newsong -> name = malloc( strlen(name) );
  strcpy(newsong -> name,name);
  newsong -> artist = malloc( strlen(name) );
  strcpy(newsong -> artist,artist);

  struct song_node *prev = NULL;
  struct song_node *cur = list;
  while(songcmp(newsong,cur) > 0) {
    prev = cur;
    cur = cur -> next;
  }
  // whenever it reaches this, newsong belongs between prev and cur
  if( prev ) {
    // case: NOT a first position insertion
    newsong -> next = cur;
    prev -> next = newsong;
  } else {
    // case: IS a first position insertion
    newsong -> next = cur;
    list = newsong;
  }
  return list;
}

void print_list(struct song_node *list) {
  printf("[ ");
  // increment list to next, stop when it equals null
  while(list) {
    print_node(list);
    list = list -> next;
  }
  printf("]\n");
}

void print_node(struct song_node *node) {
  if(node) {
    printf("{%s - %s} ",node -> name, node -> artist);
  }else
    printf("{NULL} ");
}

struct song_node *find_song(char * name, char * artist, struct song_node *list) {
  struct song_node tempnode;
  tempnode.name = name;
  tempnode.artist = artist;
  // since its temporary im not worried about mallocing
  while(list){
    if(songcmp(&tempnode,list) == 0) return list;
    list = list -> next;
  }
  return list; // if here, you're returning null bc it's not in the list
}

struct song_node *rand_song(struct song_node *list, size_t size) {
  // takes size as a variable
  // bc otherwise it would have to be calculated each time ( O(n) )
  // or you wouldn't know how far you're allowed to go randomly

  // assumes srand() has been done!!

  size_t song_ind = rand() % size;
  while(song_ind > 0 && list->next) {
    // "list->next" is checking whether we are at last elt(next would be null)
    list = list -> next;
    song_ind--;
  }
  return list;
}

struct song_node *free_list(struct song_node *list) {
  struct song_node *next;
  while(list) {
    next = list -> next;
    free(list -> name);
    free(list -> artist);
    free(list);
    list = next;
  }
  return list;
}
