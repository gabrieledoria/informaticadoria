#include <stdio.h>

int somma_divisori(int x);

int main()

{
    int num1, totale;
    prinf("\n\tInserisci un numero:  ");
    scanf("%d", &num1);
    totale = somma_divisori(num1);
}

int somma_divisori(int x)

{
    int somma = 0;
    printf("\n\tDivisori di %d : ", x);
    for (int cont = 1; cont <= x; cont++)
    {
        if (x % cont == 0)
        {
            printf("%d", cont);
            somma += cont;
        }
    }
    printf("\n\tLa somma dei divisori di %d e : %d\n", x, somma);
    return somma;
}
