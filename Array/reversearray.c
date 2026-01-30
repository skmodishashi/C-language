// reverse array with extra array variable

/*
#include<Stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5];
    for(int i=0;i<5;i++){
        brr[i]=arr[5-i-1];
    }
    for(int i=0;i<5;i++){
        printf("%d ",brr[i]);}
    return 0;
} */

// reverse array without extra array variable

/*
#include<Stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5/2;i++){
        int temp = arr[i];
        arr[i]=arr[5-i-1];
        arr[5-i-1]=temp;
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);}
    return 0;
}  */

// method - 2
#include<stdio.h>
void reverse(int arr[]){
    for(int i=0,j=4;i<j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
  return;
}
 int main(){
    int arr[5]={1,2,3,4,5};
    reverse(arr);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
 }
