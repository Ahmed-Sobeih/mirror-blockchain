CC = gcc
CFLAGS = -Wall
LDFLAGS = -lssl -lcrypto
TARGET = mirror

SRC = src/main.c
BLOCK = src/block.c

all:
	$(CC) $(CFLAGS) $(SRC) $(BLOCK) $(LDFLAGS) -o $(TARGET)

clean:
	rm -f $(TARGET)
