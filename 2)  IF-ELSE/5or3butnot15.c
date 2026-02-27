// TAKE POSITIVE INTEGER INPUT AND TELL IF IT IS DIVISIBLE BY 5 OR 3 but not by 15 by using OR (||) operator
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    if (n % 5 == 0 || n % 3 == 0) 
    {
        if (n % 15 != 0)
        {
            printf("yes it divisible by  5 or 3 but not 15");
        }

        else
        {
            printf("it is divisible by 15 ");
        }
    }
    else
    {
        printf("it is not divisible by 3 or 5 ");
    }

    return 0;
}