#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RC 5               // dimensione del campo
#define LUNGHEZZA_NAVE 3   // lunghezza della nave



void inizializzaCampo(char campo[][RC]);
void posizionaNave(char campo[][RC]);
void stampaCampo(char campo[][RC], int mostraNave);

int main() {
    char campo[RC][RC];

    srand(time(NULL)); // inizializza i numeri casuali

    inizializzaCampo(campo); // riempiamo il campo con '~'
    posizionaNave(campo);    // mettiamo la nave nel campo

    printf("Campo senza nave visibile:\n");
    stampaCampo(campo, 0); // mostra il campo nascondendo la nave

    printf("\nCampo con nave visibile:\n");
    stampaCampo(campo, 1); // mostra il campo con la nave visibile

    return 0;
}

void inizializzaCampo(char campo[][RC]) {
    int r, c;
    for (r = 0; r < RC; r++) {
        for (c = 0; c < RC; c++) {
            campo[r][c] = '~';
        }
    }
}

// Questa funzione mette la nave nel campo
void posizionaNave(char campo[][RC]) {
    int riga, colonna;
    int orizzontale = rand() % 2; // 0 = orizzontale, 1 = verticale
    int i;

    if (orizzontale == 0) {
        // Posizionamento orizzontale
        riga = rand() % RC;
        colonna = rand() % (RC - LUNGHEZZA_NAVE + 1);

        for (i = 0; i < LUNGHEZZA_NAVE; i++) {
            campo[riga][colonna + i] = '#';
        }
    } else {
        // Posizionamento verticale
        riga = rand() % (RC - LUNGHEZZA_NAVE + 1);
        colonna = rand() % RC;

        for (i = 0; i < LUNGHEZZA_NAVE; i++) {
            campo[riga + i][colonna] = '#';
        }
    }
}

// Questa funzione stampa il campo
// Se mostraNave = 1, si vede la nave
// Se mostraNave = 0, la nave viene nascosta
void stampaCampo(char campo[][RC], int mostraNave) {
    int r, c;

    // Stampa intestazione colonne
    printf("  ");
    for (c = 0; c < RC; c++) {
        printf("%d ", c);
    }
    printf("\n");

    for (r = 0; r < RC; r++) {
        printf("%d ", r);
        for (c = 0; c < RC; c++) {
            if (campo[r][c] == '#' && !mostraNave) {
                printf("~ "); // nasconde la nave
            } else {
                printf("%c ", campo[r][c]);
            }
        }
        printf("\n");
    }
}
