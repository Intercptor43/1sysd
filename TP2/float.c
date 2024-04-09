#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}

float div(float a, float b) {
    if (b == 0) {
        printf("Erreur : Division par zéro\n");
        return 0;
    }
    return a / b;
}

int main() {
    float num1, num2;
    char operation;

    printf("Entrez le premier nombre : ");
    scanf("%f", &num1);

    printf("Entrez le deuxième nombre : ");
    scanf("%f", &num2);

    printf("Entrez l'opération à réaliser (+, -, *, /) : ");
    scanf(" %c", &operation);

    switch (operation) {
        case '+':
            printf("Résultat de l'addition : %.2f\n", add(num1, num2));
            break;
        case '-':
            printf("Résultat de la soustraction : %.2f\n", sub(num1, num2));
            break;
        case '*':
            printf("Résultat de la multiplication : %.2f\n", mul(num1, num2));
            break;
        case '/':
            printf("Résultat de la division : %.2f\n", div(num1, num2));
            break;
        default:
            printf("Opération non reconnue.\n");
    }

    return 0;
}
