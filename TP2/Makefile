.PHONY: all clean

PROGS=float tableautri tableau1 matrices pointeur mise_en_jambe exercice
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
