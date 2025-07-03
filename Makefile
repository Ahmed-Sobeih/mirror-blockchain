CC = gcc
CFLAGS = -Wall
TARGET = mirror

SRC = src/main.c
BLOCK = src/block.c

all:
	$(CC) $(CFLAGS) $(SRC) $(BLOCK) -o $(TARGET)

clean:
	rm -f $(TARGET)
