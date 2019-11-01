#include<stdio.h>
#include<stdlib.h>

#include"library.h"

void test_library(){
  printf("we gonna test the libraryyyyyy dont worryyyyy\n");

  struct song_node * library[27];
  printf("\nEmpty Library: \n\t");
  print_lib(library);
}
