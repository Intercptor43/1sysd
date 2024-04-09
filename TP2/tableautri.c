#include <stdio.h>
#include <stdlib.h> 

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int t1[] = { 12, 31, 5, 42, 10 };
    int i, n = sizeof(t1) / sizeof(t1[0]);

    qsort(t1, n, sizeof(int), compare);

    for (i = 0; i < n; i++) {
        printf("%d ", t1[i]);
    }
    printf("\n");

    return 0;
}
