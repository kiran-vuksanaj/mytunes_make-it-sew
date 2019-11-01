#include<stdio.h>
#include<stdlib.h>

#include"library.h"
#include"tests.h"

void test_library(){
  // printf("we gonna test the libraryyyyyy dont worryyyyy\n");
  struct song_node * library[27];
  clear_lib(library);
  printf("Empty Library, cleared: \n");
  print_lib(library);

  test_insert_song(library);
  test_find_lib_song(library);
  test_find_lib_artist(library);
  test_shuffle(library);
  test_remove_song(library);

  printf("Clear Library:\n");
  clear_lib(library);
  print_lib(library);
}

void test_insert_song(struct song_node **library) {
  printf("\n====TESTING INSERT SONG====\n");
}
void test_find_lib_song(struct song_node **library) {

}
void test_find_lib_artist(struct song_node **library) {

}
void test_shuffle(struct song_node **library) {

}
void test_remove_song(struct song_node **library) {
}
