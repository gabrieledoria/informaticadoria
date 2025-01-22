#include <stdio.h>

void scambio(int*x, int *y);

int main ()
{
    int num1,num2;
    printf("\n\tdefiisci il primo numero: ");
    scanf("%d", &num1);
    printf("\n\tdefiisci il secondo numero: ");
    scanf("%d", &num2);

    scambio(&num1 , &num2);

    printf("\n\tOra il primo numero è  %d,il secondo numero è  %d", num1,num2);

    return 0;

}

void scambio(int*x , int*y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}