// TAKE 3 POSITIVE INTEGERS INPUT AND PRINT THE GREATEST OF THEM BY NESTED CONDITION.....
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first no :");
    scanf("%d", &a);
    printf("Enter second no :");
    scanf("%d", &b);
    printf("Enter third no :");
    scanf("%d", &c);
    if (a > b) // b is out of race

    {
        if (a > c)
            printf("%d is greatest", a);
        else // a<c
            printf("%d is greatest", c);
    }
    else
    {
        if (b > c)

            printf("%d is greatest", b);
        else
            printf("%d is greatest", c);
    }
    return 0;
}