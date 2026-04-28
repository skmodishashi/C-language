#include <stdio.h>
void increasingdecreasing(int n)
{
    if (n == 0) // base case
        return;
    printf("%d\n", n); // code
    increasingdecreasing(n - 1); // call
    printf("%d\n", n); // code
    return;
}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    increasingdecreasing(n);
    return 0;
}