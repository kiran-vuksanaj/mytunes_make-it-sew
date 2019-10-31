ifeq ($(DEBUG),true)
	CC = gcc -g
else
	CC = gcc
endif

all: main.o llist.o library.o test_llist.o test_library.o
	$(CC) -o tunes main.o llist.o library.o test_llist.o test_library.o
main.o: main.c llist.h library.h tests.h
	$(CC) -c main.c
llist.o: llist.c llist.h
	$(CC) -c llist.c
library.o: library.c library.h
	$(CC) -c library.c
test_llist.o: test_llist.c tests.h llist.h
	$(CC) -c test_llist.c
test_library.o: test_library.c tests.h library.h
	$(CC) -c test_library.c
run:
	./tunes
grind:
	valgrind ./tunes --leak-check=yes
clean:
	rm *.o
	rm tunes
	rm *~
