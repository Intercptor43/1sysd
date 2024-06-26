#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(int argc, char *argv[]) {
    int start, end;
    char *endptr;

    if (argc != 3) {
        printf("Utilisation : ./factorial Début Fin\n");
        return 1;
    }

    start = (int) strtol(argv[1], &endptr, 10);
    if (*endptr != '\0' || start < 0) {
        printf("Erreur: Argument de début invalide\n");
        return 1;
    }

    end = (int) strtol(argv[2], &endptr, 10);
    if (*endptr != '\0' || end < 0) {
        printf("Erreur: Argument de fin invalide\n");
        return 1;
    }

    for (int i = start; i <= end; i++) {
        printf("%d! = %d\n", i, factorial(i));
    }

    return 0;
}
