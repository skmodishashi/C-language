#include<stdio.h>
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        printf("Enter element no. %d : ",i+1);
       scanf("%d",&arr[i]);
    }
    for(int i=3;i>= 0;i--){
       printf("%d\t",arr[i]);
    }
    
    
    return 0;
}