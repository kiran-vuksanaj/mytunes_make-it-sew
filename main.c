#include<stdio.h>
#include<stdlib.h>

#include<time.h>

#include"llist.h"
#include"library.h"

int main() {

  srand( time(NULL) );

  printf("\tmyTunes: Project 0\nMKS65 - Systems Level Programming\nKiran Vuksanaj & Hilary Zen\n");
  struct song_node *list = NULL;

  printf("\nEmpty List: \n\t");
  print_list(list);

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

  int num_random = 15;
  printf("Pick random song (x%d)\n\t",num_random);
  while(num_random > 0) {
    print_node( rand_song(list,6) );
    printf("\n\t");
    num_random--;
  }

  printf("\nFree list: \n\t");
  list = free_list(list);
  print_list(list);
}
