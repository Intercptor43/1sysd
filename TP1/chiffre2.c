#include <stdio.h>

int main() {
    int nombre = 1;
    
    printf("Les carrés des nombres entre 1 et 50 sont :\n");
    while (nombre <= 50) {
        printf("%d ", nombre * nombre);
        nombre++;
    }
    
    return 0;
}
