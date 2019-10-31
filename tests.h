#ifndef TESTS_H
#define TESTS_H

#include"llist.h"
#include"library.h"

void test_llist();

struct song_node *test_insert_front(struct song_node *list);
struct song_node *test_remove_node(struct song_node *list);
struct song_node *test_sort_in(struct song_node *list);
struct song_node *test_find_song(struct song_node *list);
struct song_node *test_find_artist(struct song_node *list);
struct song_node *test_rand_song(struct song_node *list, size_t size, int count);

void test_library();
#endif
