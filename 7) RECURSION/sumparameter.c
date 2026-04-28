#include <stdio.h>
void decreasing(int n)
{
    if (n == 0)// base case
        return;
    printf("%d\n", n);//code
    decreasing(n - 1);//call
    return;
}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    decreasing(n);
    return 0;
}