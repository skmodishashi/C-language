// Reverse only some part of array 
#include<stdio.h>
void reverse(int arr[],int si,int ei){  //si-starting index   ei-ending index
    for(int i=si,j=ei;i<j;i++,j--){
        int temp = arr[i];  
        arr[i]=arr[j];
        arr[j]=temp;
    }
  return;
}
 int main(){
    int arr[5]={1,2,3,4,5};
    reverse(arr,1,3); // reverse takes pales from index 1 to 3
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
 }