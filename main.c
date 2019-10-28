#include<stdio.h>
#include<stdlib.h>

#include"llist.h"
#include"library.h"

int main() {
  printf("\tmyTunes: Project 0\nMKS65 - Systems Level Programming\nKiran Vuksanaj & Hilary Zen\n");
  struct song_node *list = NULL;

  printf("\nEmpty List: \n\t");
  print_list(list);

  printf("\nInsert {1950 - king princess}: \n\t");
  list = insert_front("1950","king princess",list);
  print_list(list);

  printf("\nInsert {a history - bill wurtz}: \n\t");
  list = insert_front("a history","bill wurtz",list);
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

  printf("\nFree list: \n\t");
  list = free_list(list);
  print_list(list);
}
