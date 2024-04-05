#include <stdio.h>

void afficher_chiffres(int nombre) {
    int chiffre;
    if (nombre == 0) {
        printf("%d\n", nombre);
        return;
    }
    chiffre = nombre % 10;
    afficher_chiffres(nombre / 10);
    printf("%d\n", chiffre);
}

int main() {
    int nombre;
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);
    printf("Les chiffres constituant le nombre en base 10 sont :\n");
    afficher_chiffres(nombre);
    return 0;
}
