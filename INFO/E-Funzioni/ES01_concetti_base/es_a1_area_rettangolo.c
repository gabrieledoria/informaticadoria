#include <stdio.h>

float area_rettangolo(float base, float altezza);

int main()
{
    float base, altezza, area;
    printf("inserisci la base del rettagolo : ");
    scanf("%f", &base);

    printf("inserisci l'altezza del rettamgolo: ");
    scanf("%f", &altezza);

    area = area_rettangolo(base, altezza);
    printf("l'area del rettangolo è : %.2f\n", area);

    return 0;
}

float area_rettangolo(float base, float altezza)
{
    return base * altezza;
}