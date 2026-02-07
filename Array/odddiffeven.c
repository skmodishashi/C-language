// Find the difference between the sum of elemetns at even indices to the sum of the elements at odd indices.
#include<stdio.h>
int main(){
  int arr[5]={23,24,56,75,64};
  int oddsum=0;
  int evensum=0;
  for(int i=0;i<5;i++){
    if(i%2!=0) oddsum=oddsum+arr[i];//oddsum+=arr[i]; also written as
    else evensum+=arr[i];
  }
  
  printf("%d",evensum-oddsum);
    return 0;
}