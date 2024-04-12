#include<stdio.h>
#include<stdlib.h>

void invertcase(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        char c = s[i];
        if (c >= 'A' && c <= 'Z') {
            s[i] = c + ('a' - 'A');
        }
        else if (c >= 'a' && c <= 'z') {
            s[i] = c - ('a' - 'A');
        }
        i++;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s \"string\"\n", argv[0]);
        return 1;
    }
    invertcase(argv[1]);
    printf("%s\n", argv[1]);

    return 0;
}
