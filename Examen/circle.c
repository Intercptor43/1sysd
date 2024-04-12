#include<stdio.h>
#include<stdlib.h>
#include <math.h>

double P(double r) {
    double pi = 3.14159;
    return 2 * pi * r;
}

double S(double r) {
    double pi = 3.14159;
    return pi * pow(r, 2);
}

int main() {
    double rayon;
    printf("Entrez la valeur du rayon : ");
    scanf("%lf", &rayon);
    double perimetre = P(rayon);
    double surface = S(rayon);
    printf("Le périmètre du cercle est : %.2lf\n", perimetre);
    printf("La surface du disque est : %.2lf\n", surface);

    return 0;
}
