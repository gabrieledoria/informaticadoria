#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 50
void carica_vettore(int V[]);
void visualizza_vettore(int V[]);
void copia_vettore(int V1[], int V2[], int V[]);
int main()
{
    int V[n], V1[n], V2[n];
    carica_vettore(V);
    visualizza_vettore(V);
    copia_vettore(V1, V2, V);
    return 0;
}
void carica_vettore(int V[])
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        V[i] = (rand() % 41) - 20; 
    }
    return 0;
}
    
void visualizza_vettore(int V[])
{
    for (int j = 0; j < n; j++)
    {
        printf("%d ", V[j]);
    }
    printf("\n");
void copia_vettore(int V1[], int V2[], int V[])
{
    int i = 0, j = 0, y = 0;
    while (y < n)
    {
        if (V[y] < 0)
        {
            V1[i] = V[y];
            i++;
        }
        else
        {
            V2[j] = V[y];
            j++;
        }
        y++;
    }
    return 0;
}
    
}















