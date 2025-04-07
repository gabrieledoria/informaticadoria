#include <stdio.h>
#define RC 5

void carica_matrice(char matrice[][RC]);
void stampa_matrice(char matrice[][RC]);

int main()
{
    char matrice[RC][RC];
    carica_matrice(matrice);  
    stampa_matrice(matrice);  
    return 0;
}

void carica_matrice(char matrice[][RC])
{
    
    printf("Inserisci i valori per la matrice (5x5):\n");
    for (int i = 0; i < RC; i++)
    {
        for (int j = 0; j < RC; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf(" %c", &matrice[i][j]);
        }
    }
}

void stampa_matrice(char matrice[][RC])
{
    // Print the matrix
    printf("Matrice inserita:\n");
    for (int i = 0; i < RC; i++)
    {
        for (int j = 0; j < RC; j++)
        {
            printf("%c\t", matrice[i][j]);  
        }
        printf("\n");
    }
}
