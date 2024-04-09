#include <stdio.h>

int max(int arr[], int n) {
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

int min(int arr[], int n) {
    int min_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}

int sum(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

int prod(int arr[], int n) {
    int product = 1;
    for (int i = 0; i < n; i++) {
        product *= arr[i];
    }
    return product;
}

double avg(int arr[], int n) {
    if (n == 0) return 0;
    return (double)sum(arr, n) / n;
}

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main() {
    int t1[] = { 12, 31, 5, 42, 10 };

    printf("Maximum : %d\n", max(t1, 5));

    swap(t1, 1, 3);

    printf("Tableau après échange : ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", t1[i]);
    }
    printf("\n");

    return 0;
}
