#include <stdio.h>
int main()
{
    int arr[5] = {2, 4, 6, 8, 7};
    int Product  = 1;
    for (int i = 0; i < 5; i++)
    {

        Product = Product * arr[i];
    }
    printf("%d", Product);
    return 0;
}