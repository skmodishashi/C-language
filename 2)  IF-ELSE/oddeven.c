// ISME COMPUTER 2 BAR IFF STATEMENT KO CHECK KAR RHA H
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    if (n % 2 == 0) // FOR EVEN CONDITION
    {
        printf("Even number");
    }
    if (n % 2 != 0) // FOR ODD CONDITION
    {
        printf("Odd number");
    }
    return 0;
}