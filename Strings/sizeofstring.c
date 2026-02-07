#include<stdio.h>
#include<string.h>
  // puts have special property that it automatically take one \n
int main(){
    char str[40];
    puts("Enter a String");
    gets(str);

    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("%d",size);
    return 0;
}