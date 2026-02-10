#include<stdio.h>
int main(){
    // char pointer can also be used tp start address pf as string.
    char *ptr = "Hello everyone";
    while (*ptr!='\0'){
    printf("%p\n",ptr);
    ptr++;
    }
    
    return 0;
}