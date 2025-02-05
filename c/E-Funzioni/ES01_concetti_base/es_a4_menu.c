#include <stdio.h>

// Definizione dei codici ANSI per il colore del testo
#define RESET       "\033[0m"
#define BOLD        "\033[1m"
#define UNDERLINE   "\033[4m"
#define BLACK       "\033[30m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define MAGENTA     "\033[35m"
#define CYAN        "\033[36m"
#define WHITE       "\033[37m"

// Definizione dei codici ANSI per il colore dello sfondo
#define BACK_BLACK  "\033[40m"
#define BACK_RED    "\033[41m"
#define BACK_GREEN  "\033[42m"
#define BACK_YELLOW "\033[43m"
#define BACK_BLUE   "\033[44m"
#define BACK_MAGENTA "\033[45m"
#define BACK_CYAN   "\033[46m"
#define BACK_WHITE  "\033[47m"

// Definizione per cancellare lo schermo
#define CLEAR_SCREEN "\033[2J"

// Prototipi delle funzioni
float area_rettangolo(float base, float altezza);
int mcd(int x, int y);
int somma_divisori(int x);
int menu();

int main()
{
    int scelta;
    float base, altezza, area;
    int num1, num2, ris;
    int totale;

    do
    {
        scelta=menu();
        switch (scelta)
        {
        case 1:
            printf("inserisci la base del rettagolo : ");
            scanf("%f", &base);
            printf("inserisci l'altezza del rettamgolo: ");
            scanf("%f", &altezza);
            area = area_rettangolo(base, altezza);
            printf("l'area del rettangolo è : %.2f\n", area);
            break;

        case 2:
            printf("\n\tdefiisci il primo numero: ");
            scanf("%d", &num1);
            printf("\n\tdefiisci il secondo numero: ");
            scanf("%d", &num2);
            ris = mcd(num1, num2);
            printf("mcd = %d\n", ris);
            break;

        case 3:
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

    } while (scelta != 4);
    
    return 0;
}
int menu()
{
    printf(CLEAR_SCREEN);
    printf(RED "\n--- MENU ---\n" RESET);
    printf("1. area_rettangolo 1\n");
    printf("2. mcd 2\n");
    printf("3. somma_divisori\n");
    printf("4. esci\n");

    int scelta;
    scanf("%d", &scelta);
    return scelta;
}

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
