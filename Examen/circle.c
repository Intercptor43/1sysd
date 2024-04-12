#include<stdio.h>
#include<stdlib.h>

#define PI 3.14159

double P(double r) {
    return 2 * PI * r;
}

double S(double r) {
    return PI * r * r;
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
