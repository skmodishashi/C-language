//  '\0' is a null character.... null char is act as a single char....

#include<stdio.h>
int main(){
    char arr[]={'H','e','l','l','o','\0'};
    int i=0;
     while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
     }

    return 0;
}