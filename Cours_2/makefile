CC = gcc
CFLAGS = -g -W -Wall -std=c99
LDFLAGS = 
OBJ = app.o point.o

TestApp: $(OBJ)
		$(CC) $(OBJ) $(CFLAGS) -o PointApp

point.o: point.h point.c
app.o: app.c 

clean:
		rm -f $(OBJ) PointApp