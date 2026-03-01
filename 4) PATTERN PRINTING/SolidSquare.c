#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows or column :");
    scanf("%d", &n);
   
   
    for (int i = 1; i <= 4; i++) // OUTER LOOP --> no of lines
    {
        for (int i = 1; i <= 4; i++) // INNER LOOP--> NO of stars in each line
        {
            printf("*");
        }
        printf("\n"); // har line ke baad enter marne ke liye
    }
    return 0;
}