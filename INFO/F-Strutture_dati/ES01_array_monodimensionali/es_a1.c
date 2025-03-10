/**
 * Inizializzazione e Visualizzazione
Dichiari un array di 10 interi
Inizializzi l'array con i primi 10 numeri naturali (1-10)
Visualizzi il contenuto dell'array

Doria
10/03/25
 */
#include <stdio.h>

int main()
{
    //Dichiaro il vettore di 10 elemenmti
    int numeri[10];


    //Inizializzo
    for (int i = 0; i < 10; i++)
    {
        numeri[i] = i + 1;
    }

    //STAMPO
    for (int i = 0; i < 10; i++)
    {
        printf("\t%d", numeri[i]);
    }

    printf("\n");
    return 0;
}
