#include<stdio.h>
#include<stdlib.h>

#include"library.h"

void test_library(){
  printf("we gonna test the libraryyyyyy dont worryyyyy\n");

  struct song_node * library[27];
  short i;
  for(i = 0; i<27; i++) library[i] = 0; // clear the allocated array
  printf("\nEmpty Library: \n");
  print_lib(library);
}
