# Makefile for HW 0.5 Redo

CC = g++
CFLAGS = -g -Wall -Wextra

one: p1p5.o
	$(CC) $(CFLAGS) -o one p1p5.o

p1p5.o: p1p5.cpp
	$(CC) $(CFLAGS) -c p1p5.cpp 

two: p2p3.o
	$(CC) $(CFLAGS) -o two p2p3.o

p2p3.o: p2p3.cpp
	$(CC) $(CFLAGS) -c p2p3.cpp

clean:
	$(RM) *.o *~ *.exe one two three
