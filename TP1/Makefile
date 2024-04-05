.PHONY: all clean

PROGS=tp1
CC=gcc
CFLAGS=
LDFLAGS=

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<  $(LDFLAGS)

%.s: %.c
	$(CC) -S $< 

clean:
	rm -f $(PROGS) *.s *.o
