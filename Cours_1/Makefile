CC = gcc
CFLAGS = -g -W -Wall -std=c99
LDFLAGS = 
OBJ = Test.o io.o allocation.o

TestApp: $(OBJ)
		$(CC) $(OBJ) $(CFLAGS) -o TestApp

individu.o: individu.h
allocation.o: allocation.c allocation.h
io.o: io.c io.h
Test.o: Test.c io.h

clean:
		rm -f $(OBJ) TestApp