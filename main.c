#include<stdio.h>
#include<stdlib.h>

#include<time.h>

#include"tests.h"


int main() {
  time_t seed = time(NULL);
  srand( seed );

  printf("myTunes: Project 0\nMKS65 - Systems Level Programming\nKiran Vuksanaj & Hilary Zen\n");
  printf("seed: time(NULL) = %lu\n",seed);
  test_llist();
  test_library();
}
