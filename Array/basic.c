#include<stdio.h>
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        printf("Enter element no. %d : ",i+1);
       scanf("%d",&arr[i]);
    }
    for(int i=0;i<4;i++){
       printf("%d\t",arr[i]);
    }
    
    char Arr[3]={'a','*','b'};
    printf("\n%c",Arr[2]);
    float arr[3]={1.0,4.5,7.9};
    printf("\n%f",arr[2]);
    
    return 0;
}