#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows :");
    scanf("%d", &n);
    int m;
    printf("Enter number of colums :");
    scanf("%d", &m);
    // ********... upto n number of times
    for (int i = 1; i <= n; i++) // OUTER LOOP --> no of lines
    {
        for (int i = 1; i <= m; i++) // INNER LOOP--> NO of stars in each line
        {
            printf("*");
        }
        printf("\n"); // har line ke baad enter marne ke liye
    }
    return 0;
}