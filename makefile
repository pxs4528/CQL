CC = gcc
CFLAGS = -Wall -Werror --std=c99

all: cql

cql: cql.c
	$(CC) $(CFLAGS) -o cql cql.c -g

clean:
	rm -f cql