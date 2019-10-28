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
  printf("\nInsert {a hisotry - bill wurtz}: \n\t");
  list = insert_front("a history","bill wurtz",list);
  print_list(list);
  printf("\nFree list: \n\t");
  list = free_list(list);
  print_list(list);
}
