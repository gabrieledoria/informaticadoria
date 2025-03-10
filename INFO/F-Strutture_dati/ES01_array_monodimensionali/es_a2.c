/**
 * Inizializzazione da Input e Somma
Dichiari un array di 10 float
Chieda all'utente di inserire i valori nell'array
Calcoli e visualizzi la somma di tutti gli elementi
Calcoli e visualizzi la media aritmetica degli elementi

Doria
10/03/25
 */
#include <stdio.h>

int main()
{
    //Dichiaro il vettore di 10 elemenmti
    int numeri[10];


    //Iniziali
    for (int i = 0; i < 10; i++)
    {
        numeri[i] = i + 1;
    }

    //sTAMPO
    for (int i = 0; i < 10; i++)
    {
        printf("\t%d", numeri[i]);
    }

    printf("\n");
    return 0;
}
