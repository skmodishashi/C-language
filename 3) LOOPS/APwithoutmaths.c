#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    // 4 7 10 13 16 19 .... upto n numbers of terms
    int a = 4;
    for (int i = 1; i <= n; i++)// for (int i = 1; i <= n; i++) ye sirf loop ko chalane main kaam aata h isko "a" se koi matlab nai hai
    {
        printf("%d ", a);
        a = a + 3;
    }
    return 0;
}