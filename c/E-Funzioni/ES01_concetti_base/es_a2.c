#include <stdio.h>

int mcd(int x, int y);
int main()
{
   int num1,num2,ris;
    printf("\n\tdefiisci il primo numero: ");
    scanf("%d", &num1);
    printf("\n\tdefiisci il secondo numero: ");
    scanf("%d", &num2);
    ris=mcd(num1, num2);
    printf("mcd = %d\n", ris);
    return 0;

}
int mcd(int x, int y) 
{  
    while (x != y) {
    if (x > y) {
        x = x - y;
    } else {
        y = y - x;
    }
    }
   return x;
    
}