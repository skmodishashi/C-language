#include<stdio.h>
int main(){
    int arr[5]={1,1,2,3,4,};
    for(int i=0;i<5;i++){
        printf("%p\n",&arr[i]);
        printf("%u\n",&arr[i]); //agar p ko u kar de to hexadecimal adderess decimal address me change ho jaeyga
    }  
    return 0;
}