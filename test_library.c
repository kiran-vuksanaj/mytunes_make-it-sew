#include<stdio.h>
#include<stdlib.h>

#include<string.h>

#include"library.h"
#include"tests.h"

void test_library(){
  // printf("we gonna test the libraryyyyyy dont worryyyyy\n");
  struct song_node * library[27];
  zero_lib(library);
  printf("Empty Library, zero'd: \n");
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
  // print_lib(library);

  printf("Insert {hot patootie - meat loaf}\n");
  insert_song("hot patootie","meat loaf",library);
  // print_lib(library);

  printf("Insert {dance apocalyptic - janelle monae}\n");
  insert_song("dance apocalyptic","janelle monae",library);
  // print_lib(library);

  printf("Insert {youngblood - 5 seconds of summer} (special character!)\n");
  insert_song("youngblood","5 seconds of summer",library);
  // print_lib(library);

  printf("Insert {any way the wind blows - anais mitchell}\n");
  insert_song("any way the wind blows","anais mitchell",library);
  // print_lib(library);

  printf("Insert {daisy - zedd}\n");
  insert_song("daisy","zedd",library);
  // print_lib(library);

  printf("Insert {pynk - janelle monae}\n");
  insert_song("pynk","janelle monae",library);
  // print_lib(library);

  printf("Insert {django jane - janelle monae}\n");
  insert_song("django jane","janelle monae",library);
  // print_lib(library);
  printf("Insert {ivy - frank ocean}\n");
  insert_song("ivy","frank ocean",library);
  // print_lib(library);

  printf("Insert {dreams - fleetwood mac}\n");
  insert_song("dreams","fleetwood mac",library);
  // print_lib(library);

  printf("Insert {pumped up kicks - foster the people} (goes between!)\n");
  insert_song("pumped up kicks","foster the people",library);
  print_lib(library);
}
void test_find_lib_song(struct song_node **library) {
  printf("\n====TESTING FIND SONG IN LIBRARY====\n");

  printf("\nFind {dreams - fleetwood mac}: ");
  print_node( find_lib_song("dreams","fleetwood mac",library) );
  printf("\nFind {reality - fleetwood mac}: ");
  print_node( find_lib_song("reality","fleetwood mac",library) );
  printf("\nFind {youngblood - 5 seconds of summer}: ");
  print_node( find_lib_song("youngblood","5 seconds of summer",library) );
  printf("\nFind {pynk - janelle monae}: ");
  print_node( find_lib_song("pynk","janelle monae",library) );
  printf("\nFind {nonsense - &&&jfksd}: ");
  print_node( find_lib_song("nonsense","&&&jfksd",library) );
}
void test_find_lib_artist(struct song_node **library) {
  printf("\n====TESTING FIND/PRINT ARTIST IN LIBRARY====\n");
  printf("Search for [janelle monae]\n");
  print_artist("janelle monae",library);
  printf("Search for [zedd]\n");
  print_artist("zedd",library);
  printf("Search for [fleetwood mac] (stuff comes after them in f\n");
  print_artist("fleetwood mac",library);
  printf("Search for [the 1975] (not in library)\n");
  print_artist("the 1975",library);
}
void test_shuffle(struct song_node **library) {
  printf("\n====TESTING SHUFFLE====\n");
  struct song_node *shuffle_sequence;

  shuffle_sequence = shuffle(library,0);
  printf("Shuffle of length 0: \n");
  print_list(shuffle_sequence);
  shuffle_sequence = free_list(shuffle_sequence);

  size_t shuffle_length = rand() % 20;
  shuffle_sequence = shuffle(library,shuffle_length);
  printf("\nShuffle of length %lu: \n",shuffle_length);
  print_list(shuffle_sequence);
  shuffle_sequence = free_list(shuffle_sequence);

}
void test_remove_song(struct song_node **library) {
  printf("\n====TESTING REMOVE SONG====\n");
  printf("\n(songs not included)\n");

  printf("Remove {non-song - %%non-artist}\n");
  remove_song("non song","%non-artist",library);

  printf("Remove {moustache - man}\n");
  remove_song("moustache","man",library);

  printf("Remove {americans - janelle monae}\n");
  remove_song("americans","janelle monae",library);


  printf("\n(actual songs)\n");

  printf("Remove {doomsday - mf doom}\n");
  remove_song("doomsday","mf doom",library);

  printf("Remove {daisy - zedd}\n");
  remove_song("daisy","zedd",library);

  printf("Remove {youngblood - 5 seconds of summer}\n");
  remove_song("youngblood","5 seconds of summer",library);

  printf("Remove {django jane - janelle monae} (built, non-literal)\n");
  char name[20] = "django";
  strcat(name," jane");
  char artist[20] = "janelle";
  strcat(artist," monae");
  remove_song(name,artist,library);
  print_lib(library);
}
