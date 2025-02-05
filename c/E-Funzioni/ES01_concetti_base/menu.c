#include <stdio.h>
float area_rettangolo(float base, float altezza);
int mcd(int x, int y);
int somma_divisori(int x);

int main()
{
    int scelta;
do 
{
    printf(" \n--- MENU ---\n");
    printf("1. area_rettangolo 1\n");
    printf("2. mcd 2\n");
    printf("3. somma_divisori\n");
    printf("4. esci\n");

    scanf("%d", &scelta);

    switch(scelta) {
        case 1:
            float (base, altezza, area);
        printf("inserisci la base del rettagolo : ");
        scanf("%f", &base);

        printf("inserisci l'altezza del rettamgolo: ");
        scanf("%f", &altezza);

        area = area_rettangolo(base, altezza);
        printf("l'area del rettangolo è : %.2f\n", area);
            break;


        case 2:
            int (num1, num2, ris);
        printf("\n\tdefiisci il primo numero: ");
        scanf("%d", &num1);
        printf("\n\tdefiisci il secondo numero: ");
        scanf("%d", &num2);
        ris = mcd(num1, num2);
        printf("mcd = %d\n", ris);
            break;


        case 3:
           int (num1, totale);
    printf("\n\tInserisci un numero:  ");
    scanf("%d", &num1);
    totale = somma_divisori(num1);

            break;
        case 4:
            printf("uscita dal programma...\n");
            break;
        default:
            printf("scelta non valida, riprova. \n");
    }

}   while (scelta!=4);
return 0;

float area_rettangolo(float base, float altezza)
{
    return base * altezza;
    
}
int mcd(int x, int y)
{
    while (x != y)
    {
        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }
    return x;
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

