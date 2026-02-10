#include<stdio.h>
#include<string.h>

int main(){
    char s1[] = "Hello Everyone";
       // shallow copy-->
    // char* s2 = s1; // s2 is a shallow copy
    // s1[0]='M';  
    // printf("%s",s2);

    // // Deep copy-->
    // char s2[] = "Hello everyone";
    // s2[0]= 'M';
    // printf("%s\n",s1);
    // printf("%s",s2);   // both have differnt address

    char* s2;
    s2=s1;   
     printf("%s\n",s1);  
    printf("%s",s2); 
    return 0;
} 