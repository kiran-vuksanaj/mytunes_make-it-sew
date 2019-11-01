#ifndef LIBRARY_H
#define LIBRARY_H

#include"llist.h"

void insert_song(char * name, char * artist, struct song_node ** lib);

struct song_node * find_lib_song(char * name, char * artist, struct song_node ** lib);

struct song_node * find_lib_artist(char * name, char * artist, struct song_node ** lib);

void print_letter(char letter, struct song_node ** lib);

void print_artist(char * artist, struct song_node ** lib);

void print_lib(struct song_node ** lib);

struct song_node * shuffle(struct song_node ** lib);

void remove_song(char *name, char *artist, struct song_node ** lib);

void clear_lib(struct song_node ** lib);

void zero_lib(struct song_node ** lib);

#endif
