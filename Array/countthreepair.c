// Find the total number of triplets in the array whose sum is equal to the given value x.

#include<stdio.h>
int main(){
    int paircount=0;
    int x=12;
  int arr[8]={1,2,3,4,5,6,7,8}; 
   for(int i=0;i<8;i++){
    for(int j=i+1;j<8;j++){
        for(int k=j+1;k<8;k++){
      if(x==arr[i]+arr[j]+arr[k]){
        paircount++;
        printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
        }} 
    }
   } printf("%d",paircount);
}