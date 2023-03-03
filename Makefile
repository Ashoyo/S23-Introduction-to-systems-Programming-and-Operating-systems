CC = gcc
CFLAGS = -Wall -Werror

MYps: MYps.c
	$(CC) $(CFLAGS) -o MYps MYps.c

clean:
	rm -f MYps

all: MYps
