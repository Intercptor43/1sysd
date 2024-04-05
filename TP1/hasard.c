#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nombreMystere, nombreUtilisateur;
    srand(time(NULL));

    nombreMystere = rand() % 10 + 1;

    printf("Devinez le nombre mystere entre 1 et 10.\n");

    do {
        printf("Entrez votre proposition : ");
        scanf("%d", &nombreUtilisateur);

        if (nombreUtilisateur < nombreMystere) {
            printf("Plus grand !\n");
        } else if (nombreUtilisateur > nombreMystere) {
            printf("Plus petit !\n");
        } else {
            printf("Trouvé ! Le nombre mystere est %d\n", nombreMystere);
        }
    } while (nombreUtilisateur != nombreMystere);

    return 0;
}
