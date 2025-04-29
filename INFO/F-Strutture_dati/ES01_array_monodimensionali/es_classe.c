#include <stdio.h>
#define N 5
int carica_array(int v[]);
int mostra_array(int v[]);
int n_primo(int v[]);
int conta_primo(int v[]);

int main()
{
    int risultato,ris1;
    carica_array(v[])
    printf("array :%d , mostra_array(v[N])");
    ris1= conta_primo (v[N]);
    printf("il numero di numeri primi è %d",ris1);
    return 0;
}

void carica_array(int v[])
{
    
    for (i=0; i<N; i++)
    {
        printf("inserisci il numero %d",i+1);
        scanf("%d",v[i]);
    }
}

void mostra_array(int v[])
{
    for (i=0; i<N; i++)
    {
        printf("%5d",v[i]);
    }
}

