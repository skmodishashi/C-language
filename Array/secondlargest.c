// FInd the second largest no.
/*
#include <stdio.h>
int main()
{
    int arr[5] = {-21, 34, 65, 23, 87};
    int max = arr[0]; 
    int smax = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    
     for (int i = 0; i < 5; i++)
    {
        if (smax < arr[i] && arr[i]!=max)
        {
            smax = arr[i];
        }
    }
    printf("%d", smax);
    return 0;
} 
    */

    //Method-2
#include <stdio.h>
int main()
{
    int arr[5] = {-21, 34, 65, 23, 87};
    int max = arr[0]; 
    int smax = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i]){
            smax=max; // smax is now previous max
            max=arr[i]; // max is now a new max
        }
        else if(smax<arr[i] && max!=arr[i]){ // max>arr[i]
            smax = arr[i];
        }
    }
    
    printf("%d", smax);
    return 0;
} 
