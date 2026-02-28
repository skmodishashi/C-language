//PRINT HELLO PW 'n' TIMES
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) //FOR LOOP CONDITION..
    {
        printf("Hello PW\n");
    }
    return 0;
}