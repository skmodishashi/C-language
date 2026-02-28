#include<stdio.h>
int main(){
    float a=100;
    for (int i = 1; i<=a; i++)
    {
        printf("%f  ",a);
        a=a/2;
    }
    
    return 0;
}