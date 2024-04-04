all: hello bonjour

hello: hello.c
	gcc -o hello hello.c

bonjour: bonjour.c
	gcc -o bonjour bonjour.c

hello.s: hello.c
	gcc -S hello.c

clean:
	rm -f hello bonjour *.s
