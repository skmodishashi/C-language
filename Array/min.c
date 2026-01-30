
#include <stdio.h>
int main()
{
    int arr[5] = {-21, 34, -65, 23, 87};
    int min = arr[0]; // first ko fix kar liya fir sabse compare kar lenge
    for (int i = 1; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d", min);
    return 0;
}