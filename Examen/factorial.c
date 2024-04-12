#include<stdio.h>
#include<stdlib.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(int argc, char *argv[]) {
    int start, end;

    if (argc != 3) {
        printf("Usage : ./factorial start end\n");
        return 1;
    }
    start = atoi(argv[1]);
    end = atoi(argv[2]);
    for (int i = start; i <= end; i++) {
        printf("%d! = %d\n", i, factorial(i));
    }

    return 0;
}