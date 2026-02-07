// question - odd index wale 2 se multiply and even index wale 10 se increment
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(i%2!=0) arr[i]=2*arr[i]; // same can write as arr[i]*=2
        else arr[i]=10+arr[i]; // same can written as arr[i]+=10;
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}