#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char nom_joueur[50];
    int nombre_secret, proposition, nombre_tentatives = 0;
    int propositions[100];

    printf("Entrez votre nom : ");
    scanf("%s", nom_joueur);
    printf("Bonjour, %s! Bienvenue dans le jeu de devinette.\n", nom_joueur);
    
    srand(time(NULL));
    nombre_secret = rand() % 100 + 1;
    
    while (1) {
        printf("Devinez le nombre (entre 1 et 100) : ");
        scanf("%d", &proposition);
        propositions[nombre_tentatives] = proposition;
        nombre_tentatives++;
        
        if (proposition < nombre_secret) {
            printf("Le nombre secret est plus grand.\n");
        } else if (proposition > nombre_secret) {
            printf("Le nombre secret est plus petit.\n");
        } else {
            printf("Félicitations, vous avez deviné le nombre secret en %d tentatives!\n", nombre_tentatives);
            printf("Voici les valeurs que vous avez proposées : ");
            for (i = 0; i < nombre_tentatives; i++) {
                printf("%d ", propositions[i]);
            }
            printf("\n");
            break;
        }
    }

    return 0;
}
