#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int a = 0, b = 1, sum =0;
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++)
    {  printf("%d ",sum);
        sum = a + b;
        a = b;
        b = sum;
        
    }
    
    return 0;
}