// count the number of elements in given aaray greater than a given no. x
#include<stdio.h>
int main(){
     int arr[5]={23,34,45,67,87};
     int x=35;
     int count =0;
     for(int i=0;i<5;i++){
        if(x<arr[i]) count++;
     }
     printf("%d",count);
    return 0;

}