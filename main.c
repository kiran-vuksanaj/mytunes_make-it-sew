#include<stdio.h>
#include<stdlib.h>

#include<time.h>

#include"llist.h"
#include"library.h"
#include"tests.h"


int main() {

  srand( time(NULL) );

  printf("myTunes: Project 0\nMKS65 - Systems Level Programming\nKiran Vuksanaj & Hilary Zen\n");

  test_llist();
}
