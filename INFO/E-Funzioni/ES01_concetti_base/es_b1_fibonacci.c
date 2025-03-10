#include <stdio.h>

void fibonacci(int x);

int main()
{
    int num;
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    printf("La sequenza di Fibonacci fino al numero %d è: ", num);
    fibonacci(num);
    return 0;
}

void fibonacci(int x)
{
    int primo = 0, secondo = 1, terzo;

    if (x >= 1)
        printf("%d ", primo); 
    if (x >= 2)
        printf("%d ", secondo); 

    for (int i = 3; i <= x; i++)
    {
        terzo = primo + secondo;
        printf("%d ", terzo);
        primo = secondo;
        secondo = terzo;
    }

    printf("\n");
}
