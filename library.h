#ifndef LIBRARY_H
#define LIBRARY_H

void * insert_song(char * name, char * artist, struct song_node *[] lib);

struct song_node * find_lib_song(char * name, char * artist, struct song_node *[] lib);

struct song_node * find_lib_artist(char * name, char * artist, struct song_node *[] lib);

void * print_letter(char * letter);

void * print_artist(char * artist);

void * print_lib();

struct song_node * shuffle();

struct song_node * remove_song(char *name, char *artist, struct song_node *[] lib);

struct song_node * remove_lib(struct song_node *[] lib);

#endif
