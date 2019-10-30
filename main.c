#include<stdio.h>
#include<stdlib.h>

#include<time.h>

#include"llist.h"
#include"library.h"

struct song_node *test_insert_front(struct song_node *list);
struct song_node *test_sort_in(struct song_node *list);
struct song_node *test_find_song(struct song_node *list);
struct song_node *test_find_artist(struct song_node *list);
struct song_node *test_rand_song(struct song_node *list, size_t size, int count);

int main() {

  srand( time(NULL) );

  printf("\tmyTunes: Project 0\nMKS65 - Systems Level Programming\nKiran Vuksanaj & Hilary Zen\n");

  struct song_node *list = NULL;
  printf("\nEmpty List: \n\t");
  print_list(list);

  list = test_sort_in(list);
  print_list(list);
  list = test_find_song(list);
  print_list(list);
  list = test_find_artist(list);
  print_list(list);
  list = test_rand_song(list,6,15);
  print_list(list);

  list = free_list(list);
  printf("\nFree list:\n\t");
  print_list(list);
}

struct song_node *test_insert_front(struct song_node *list);
struct song_node *test_sort_in(struct song_node *list) {

  printf("\n====TESTING SORT IN====\n");

  printf("\nSort in {1950 - king princess}: \n\t");
  list = sort_in("1950","king princess",list);
  print_list(list);

  printf("\nSort in {a history - bill wurtz}: \n\t");
  list = sort_in("a history","bill wurtz",list);
  print_list(list);

  printf("\nSort in {dirty deeds - acdc}: \n\t");
  list = sort_in("dirty deeds","acdc",list);
  print_list(list);

  printf("\nSort in {nights - frank ocean}: \n\t");
  list = sort_in("nights","frank ocean",list);
  print_list(list);

  printf("\nSort in {heaven - troye sivan}: \n\t");
  list = sort_in("heaven","troye sivan",list);
  print_list(list);

  printf("\nSort in {prophet - king princess}: \n\t");
  list = sort_in("prophet","king princess",list);
  print_list(list);

  return list;
}
struct song_node *test_find_artist(struct song_node *list) {

  printf("\n====TESTING FIND ARTIST====\n");

  printf("\nFind artist {frank ocean}: \n\t");
  struct song_node *artist = NULL;
  artist = find_artist("frank ocean", list);
  print_node(artist);

  printf("\nFind artist {troye sivan}: \n\t");
  artist = find_artist("troye sivan", list);
  print_node(artist);

  printf("\nFind artist {random}: \n\t");
  artist = find_artist("random", list);
  print_node(artist);

  printf("\nFind artist {king princess}: \n\t");
  artist = find_artist("king princess", list);
  print_node(artist);

  return list;
}
struct song_node *test_rand_song(struct song_node *list, size_t size, int num_random) {
  printf("\n====TESTING RAND SONG====\n");
  printf("Pick random song (x%d)\n\t",num_random);
  while(num_random > 0) {
    print_node( rand_song(list,6) );
    printf("\n\t");
    num_random--;
  }
  return list;
}
struct song_node *test_find_song(struct song_node *list) {

  printf("\n====TESTING FIND SONG====\n");

  printf("\n\nFind song {dirty deeds - acdc}: \n\t");
  struct song_node *found_song = find_song("dirty deeds","acdc",list);
  print_node(found_song);

  printf("\nFind song {heaven - troye sivan}: \n\t");
  found_song = find_song("heaven","troye sivan",list);
  print_node(found_song);

  printf("\nFind song {prophet - king princess}: \n\t");
  found_song = find_song("prophet","king princess",list);
  print_node(found_song);
  return list;
}
