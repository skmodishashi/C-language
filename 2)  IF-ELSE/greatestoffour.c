// TAKE 4 POSITIVE INTEGERS INPUT AND PRINT THE GREATEST OF THEM
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter first no :");
    scanf("%d", &a);
    printf("Enter second no :");
    scanf("%d", &b);
    printf("Enter third no :");
    scanf("%d", &c);
    printf("Enter fourth no :");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is greatest", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("%d is greatest", b);
    }
    if (c > a && c > b && c > d)
    {
        printf("%d is greatest", c);
    }
    if (d > a && d > b && d > c)
    {
        printf("%d is greatest", d);
    }

    return 0;
}