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

  printf("\n====CLEAR LIBRARY====\n");
  clear_lib(library);
  print_lib(library);
}

void test_insert_song(struct song_node **library) {
  printf("\n====TESTING INSERT SONG====\n");
  printf("Insert {doomsday - mf doom}:\n");
  insert_song("doomsday","mf doom",library);
  print_lib(library);
  
  printf("Insert {hot patootie - meat loaf}\n");
  insert_song("hot patootie","meat loaf",library);
  print_lib(library);

  printf("Insert {dance apocalyptic - janelle monae}\n");
  insert_song("dance apocalyptic","janelle monae",library);
  print_lib(library);

  printf("Insert {youngblood - 5 seconds of summer} (special character!)\n");
  insert_song("youngblood","5 seconds of summer",library);
  print_lib(library);

  printf("Insert {any way the wind blows - anais mitchell}\n");
  insert_song("any way the wind blows","anais mitchell",library);
  print_lib(library);

  printf("Insert {daisy - zedd}\n");
  insert_song("daisy","zedd",library);
  print_lib(library);

  printf("Insert {pynk - janelle monae}\n");
  insert_song("pynk","janelle monae",library);
  print_lib(library);

  printf("Insert {django jane - janelle monae}\n");
  insert_song("django jane","janelle monae",library);
  print_lib(library);

  printf("Insert {ivy - frank ocean}\n");
  insert_song("ivy","frank ocean",library);
  print_lib(library);

  printf("Insert {dreams - fleetwood mac}\n");
  insert_song("dreams","fleetwood mac",library);
  print_lib(library);

  printf("Insert {pumped up kicks - foster the people} (goes between!)\n");
  insert_song("pumped up kicks","foster the people",library);
  print_lib(library);
}
void test_find_lib_song(struct song_node **library) {
  printf("\n====TESTING FIND SONG IN LIBRARY====\n");

}
void test_find_lib_artist(struct song_node **library) {
  printf("\n====TESTING FIND ARTIST IN LIBRARY====\n");
}
void test_shuffle(struct song_node **library) {
  printf("\n====TESTING SHUFFLE====\n");
}
void test_remove_song(struct song_node **library) {
  printf("\n====TESTING REMOVE SONG====\n");
}
