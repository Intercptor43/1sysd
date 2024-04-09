#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int pop;
    double area;
} City;

City enterCity() {
    City city;
    printf("Nom de la ville : ");
    scanf("%s", city.name);
    printf("Population : ");
    scanf("%d", &city.pop);
    printf("Surface (en km²) : ");
    scanf("%lf", &city.area);
    return city;
}

void printCityInfo(City city) {
    printf("Nom : %s\n", city.name);
    printf("Population : %d\n", city.pop);
    printf("Surface : %.2f km²\n", city.area);
}

double populationDensity(City city) {
    return (double)city.pop / city.area;
}

int main() {
    City city1 = enterCity();
    printf("\nInformations sur la ville saisie :\n");
    printCityInfo(city1);
    printf("Densite de population : %.2f hab/km²\n", populationDensity(city1));

    return 0;
}
