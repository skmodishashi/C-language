
#include <stdio.h>
int main()
{
    int arr[5] = {-21, 34, 65, 23, 87};
    int max = arr[0]; // first ko fix kar liya fir sabse compare kar lenge
    for (int i = 1; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}


//method - 2

// #include <stdio.h>
// #include <limits.h> //library fn
// int main()
// {
//     int arr[5] = {-21, 34, 65, 23, 87};
//     int max = INT_MIN; // bahut hi smallest h 
//     for (int i = 1; i < 5; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     printf("%d", max);
//     return 0;
// }