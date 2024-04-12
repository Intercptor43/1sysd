.PHONY: all clean

PROGS=
CC=gcc
CFLAGS=
LDFLAGS=-lm

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

%.s: %.c
	$(CC) -S $< 

clean:
	rm -f $(PROGS) *.s *.o
