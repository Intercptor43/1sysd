#include <stdio.h>
#include <stdlib.h>

int slen(char *s) {
    int length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
    return length;
}

int is_upper(char *s) {
    while (*s != '\0') {
        if (*s >= 'a' && *s <= 'z') {
            return 0;
        }
        s++;
    }
    return -1;
}

int is_lower(char *s) {
    while (*s != '\0') {
        if (*s >= 'A' && *s <= 'Z') {
            return 0;
        }
        s++;
    }
    return -1;
}

void supper(char *s) {
    while (*s != '\0') {
        if (*s >= 'a' && *s <= 'z') {
            *s -= 32;
        }
        s++;
    }
}

void slower(char *s) {
    while (*s != '\0') {
        if (*s >= 'A' && *s <= 'Z') {
            *s += 32;
        }
        s++;
    }
}

char *scopy(char *s) {
    int length = slen(s);
    char *copy = (char *)malloc(length + 1);
    if (copy == NULL) {
        printf("Erreur d'allocation de mémoire.\n");
        exit(1);
    }
    for (int i = 0; i <= length; i++) {
        copy[i] = s[i];
    }
    return copy;
}

int sequal(char *s1, char *s2) {
    while (*s1 == *s2) {
        if (*s1 == '\0') {
            return -1;
        }
        s1++;
        s2++;
    }
    return 0;
}

int main() {
    char str1[] = "Hello";
    char str2[] = "hello";
    char str3[] = "HELLO";

    printf("Longueur de str1 : %d\n", slen(str1));
    printf("Est-ce que str1 est en majuscules ? %d\n", is_upper(str1));
    printf("Est-ce que str2 est en minuscules ? %d\n", is_lower(str2));

    supper(str2);
    printf("str2 après supper : %s\n", str2);

    slower(str3);
    printf("str3 après slower : %s\n", str3);

    char *copy = scopy(str1);
    printf("Copie de str1 : %s\n", copy);

    printf("Est-ce que str1 et str2 sont égaux ? %d\n", sequal(str1, str2));
    printf("Est-ce que str1 et copy sont égaux ? %d\n", sequal(str1, copy));

    free(copy);

    return 0;
}
