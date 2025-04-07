#include <stdio.h>
#define RC 5

void inizializzaMatrice(char matrice[][RC]);
void stampaMatrice(char matrice[][RC]);

int main() {
    char campo[RC][RC];

    inizializzaMatrice(campo);
    stampaMatrice(campo);

    return 0;
}

void inizializzaMatrice(char matrice[][RC]) {
    int i, j;

    for (i = 0; i < RC; i++) {
        for (j = 0; j < RC; j++) {
            matrice[i][j] = '~';  // Acqua
        }
    }
}

void stampaMatrice(char matrice[][RC]) {
    int i, j;

    printf("   ");
    for (j = 0; j < RC; j++) {
        printf("%d ", j); // intestazione colonne
    }
    printf("\n");

    for (i = 0; i < RC; i++) {
        printf("%d  ", i); // intestazione righe
        for (j = 0; j < RC; j++) {
            printf("%c ", matrice[i][j]);
        }
        printf("\n");
    }
}
