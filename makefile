ifeq ($(DEBUG),true)
  CC = gcc -g
else
  CC = gcc
endif

all: main.o llist.o library.o
  gcc -o tunes main.o llist.o library.o
main.o: main.c llist.h library.h
  $(CC) -c main.c
llist.o: llist.c llist.h
  $(CC) -c llist.c
library.o: library.c library.h
  $(CC) -c library.c
run:
  ./tunes
grind:
  valgrind ./tunes --leak-check=yes
clean:
  rm *.o
  rm tunes
  rm *~
