#include <stdio.h>
int main(){
    int n;
    printf("Enter the Number");
    scanf("%d ",&n);
    for (int i = n; i <=n*10; i=i+n)  //YOU CAN WRITE i++ OR i=i+1 both are same 
    {
            printf("%d ",i);   
    }
     
    return 0;
}