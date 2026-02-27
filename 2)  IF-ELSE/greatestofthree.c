//TAKE 3 POSITIVE INTEGERS INPUT AND PRINT THE GREATEST OF THEM
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first no :");
    scanf("%d", &a);
    printf("Enter second no :");
    scanf("%d", &b);
    printf("Enter third no :");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is greatest",a);
    }
    if (b > a && b > c)
    {
        printf("%d is greatest",b);
    }
    if (c > a && c > b)
    {
        printf("%d is greatest",c);
    }

    return 0;
}