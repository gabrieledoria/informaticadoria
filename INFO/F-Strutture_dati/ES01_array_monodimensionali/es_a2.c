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
    // Dichiaro il vettore di 10 elementi
    int numeri[10];
    int somma = 0;
    float media;

    // Riempio il vettore con i numeri da 1 a 10
    for (int i = 0; i < 10; i++)
    {
        numeri[i] = i + 1;
        somma += numeri[i]; // Sommo ogni elemento
    }

    // Stampo gli elementi del vettore
    printf("Elementi del vettore:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\t%d", numeri[i]);
    }

    // Calcolo e visualizzo la somma degli elementi
    printf("\nSomma degli elementi: %d\n", somma);

    // Calcolo e visualizzo la media aritmetica degli elementi
    media = somma / 10.0; // Divido per 10.0 per ottenere la media come numero decimale
    printf("Media aritmetica degli elementi: %.2f\n", media);

    return 0;
}
