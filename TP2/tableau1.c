#include <stdio.h>

int main() {
    int n, i;
    int nombres[50];
    int somme = 0;
    int plus_grand, plus_petit;

    printf("Combien de nombres souhaitez-vous saisir (max. 50) ? ");
    scanf("%d", &n);

    if (n > 50 || n < 1) {
        printf("Nombre invalide. Le nombre doit être compris entre 1 et 50.\n");
        return 1;
    }

    printf("Entrez %d nombres entiers : ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nombres[i]);
        somme += nombres[i];
    }

    printf("La somme des nombres est : %d\n", somme);

    plus_grand = plus_petit = nombres[0]; 
    for (i = 1; i < n; i++) {
        if (nombres[i] > plus_grand) {
            plus_grand = nombres[i];
        }
        if (nombres[i] < plus_petit) {
            plus_petit = nombres[i];
        }
    }
    printf("Contenu du tableau : ");
    for (i = 0; i < n; i++) {
        printf("%d ", nombres[i]);
    }
    printf("\n");

    printf("Le plus grand nombre est : %d\n", plus_grand);
    printf("Le plus petit nombre est : %d\n", plus_petit);

    return 0;
}
