// check palindrome
#include<stdio.h>
void palindrome(int arr[]){
    for(int i=0,j=6;i<j;i++,j--){
        if(arr[i] != arr[j]){
            printf("It is not a Palindrome");
            return;
        }
    }
    printf("It is a Palindrome");
}

int main(){
    int arr[7]={1,2,3,4,3,2,1};
    palindrome(arr);
}