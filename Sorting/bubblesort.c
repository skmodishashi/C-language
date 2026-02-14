#include<stdio.h>
int main(){ // Bubble sort->Unsorted array->ascending order
    int arr[5]={5,4,3,2,1};
    int n=5;                    
    for(int i=0;i<n;i++){
      printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<n-1;i++){  //outer loop will stand for no. of passes
        for(int j=0;j<=n-2;j++){    //  can also be written as for(int j=0;j<=n-2-i;j++) for less swapping   // inner loop will do the swapping
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
      printf("%d ",arr[i]);
    }
    return 0;
}