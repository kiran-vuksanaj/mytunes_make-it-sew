#ifndef LLIST_H
#define LLIST_H

struct song_node {
  char * name;
  char * artist;
  struct song_node * next;
};

struct song_node *insert_front(char * name, char * artist, struct song_node * list);

struct song_node *sort_in(char * name, char * artist, struct song_node * list);

void print_list(struct song_node *list);

void print_node(struct song_node *node);

struct song_node *find_song(char * name, char * artist, struct song_node *list);

struct song_node *find_artist(char *artist, struct song_node *list);

size_t length_list(struct song_node *list);

struct song_node *rand_song(struct song_node *list);

struct song_node *rand_songn(struct song_node *list, size_t size);

struct song_node *remove_node(char *name, char *artist, struct song_node *list);

struct song_node *build_node(char *name, char *artist, struct song_node *list);

struct song_node *free_node(struct song_node *node);

struct song_node *free_list(struct song_node *list);

#endif
