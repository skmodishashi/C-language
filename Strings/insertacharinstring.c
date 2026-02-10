// Write a fn to insert new char in a string at a given position
#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Hello";
    printf("%s\n",str);
    // 1nd index pe 'l'
    for(int i=4;i>=2;i--){
        str[i+1]=str[i];
    }
    str[2] = 'h';
    printf("%s",str);
    return 0;
}