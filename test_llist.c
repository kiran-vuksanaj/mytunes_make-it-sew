#include<stdio.h>
#include<stdlib.h>

#include<string.h>

#include"tests.h"
#include"llist.h"

void test_llist() {
  printf("\nTests on linked list functions \n");
  printf("\n// notes on testing: \n");
  printf("// print_node, print_list are tested througout\n");
  printf("// build_node is a helper method, used within insert_front and sort_in\n");
  printf("// free_node is a helper method, used within free_list and remove_node\n");
  printf("// songcmp is a helper method, used within sort_in, find_song\n\n");

  struct song_node *list = NULL;
  printf("\nEmpty List: \n\t");
  print_list(list);

  list = test_insert_front(list);
  printf("\n\n");
  list = test_remove_node(list);
  printf("\n\n");
  list = test_sort_in(list);
  printf("\n\n");
  list = test_find_song(list);
  printf("\n\n");
  list = test_find_artist(list);
  printf("\n\n");
  list = test_rand_song(list,6,15);
  printf("\n\n");

  list = free_list(list);
  printf("\nFree list:\n\t");
  print_list(list);
}

struct song_node *test_insert_front(struct song_node *list) {
  printf("\n====TESTING INSERT FRONT====\n");

  printf("\ninsert_front {cold war - cautious clay}: \n\t");
  list = insert_front("cold war","cautious clay",list);
  print_list(list);

  printf("\ninsert_front {just like love - perfume genius}: \n\t");
  list = insert_front("just like love","perfume genius",list);
  print_list(list);

  printf("\ninsert_front {aint together - king princess}: \n\t");
  list = insert_front("aint together","king princess",list);
  print_list(list);

  printf("\ninsert_front {attitude - leikeli47}: \n\t");
  list = insert_front("attitude","leikeli47",list);
  print_list(list);

  printf("\ninsert_front {money - leikeli47}: \n\t");
  list = insert_front("money","leikeli47",list);
  print_list(list);

  return list;
}
struct song_node *test_remove_node(struct song_node *list) {
  printf("\n====TESTING REMOVE NODE====\n");

  printf("Remove node {attitude - leikeli47}: \n\t");
  list = remove_node("attitude","leikeli47",list);
  print_list(list);

  printf("\nRemove node {cold war - cautious clay}: \n\t");
  list = remove_node("cold war","cautious clay",list);
  print_list(list);

  printf("\nRemove node {not a song - cautious clay}: [should stay same!]\n\t");
  list = remove_node("not a song","cautious clay",list);
  print_list(list);

  printf("\nRemove node {aint together - mr gern}: [should stay same!]\n\t");
  list = remove_node("aint together","mr gern",list);
  print_list(list);

  printf("\nRemove node {american pie - don mclean}: [should stay same!]\n\t");
  list = remove_node("american pie","don mclean",list);
  print_list(list);

  printf("\nRemove node {aint together - king princess}: [testing non-literals]\n\t");
  char songname[20] = "aint";
  strcat(songname," together");
  char artistname[20] = "king";
  strcat(artistname," princess");
  list = remove_node(songname,artistname,list);
  print_list(list);

  printf("\nRemove node {money - leikeli47}: \n\t");
  list = remove_node("money","leikeli47",list);
  print_list(list);

  printf("\nRemove node {just like love - perfume genius}: \n\t");
  list = remove_node("just like love","perfume genius",list);
  print_list(list);

  printf("\nRemove node {fake - song}: \n\t");
  list = remove_node("fake","song",list);
  print_list(list);

  return list;
}
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

  printf("\nFind song {not a song by troye sivan - troye sivan}: \n\t");
  found_song = find_song("not a song by troye sivan","troye sivan",list);
  print_node(found_song);

  printf("\nFind song {fake song - fake artist}: \n\t");
  found_song = find_song("fake song","fake artist",list);
  print_node(found_song);

  printf("\nFind song {prophet - troye sivan}: (real song name, real artist, not matching) \n\t");
  found_song = find_song("prophet","troye sivan",list);
  print_node(found_song);

  return list;
}
