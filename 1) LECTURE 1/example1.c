//take two integer input,a and b :a>b, and find the remainder when a is divided by b.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first no:");
    scanf("%d",&a);
    printf("Enter second no:");
    scanf("%d",&b);
    int q = a/b ;
    int r = a - b*q; // Divisor*Quotient + Remainder=dividend
    printf("The Remainder when %d is divided by %d is :%d",a,b,r);

       return 0; 
}