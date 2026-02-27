// TAKE POSITIVE INTEGER INPUT AND TELL IF IT IS DIVISIBLE BY 5 OR 3 by using OR (||) operator
#include<stdio.h>
int main(){
    int n ;
    printf("Enter a number :");
    scanf("%d",&n);
    
    if (n%5==0 || n%3==0) //YOU CAN SAY THAT IT IS DIVISIBLE BY 15 ONLY ALSO THEN YOU HAVE TO WRITE ONLY n%15==0
    {
        printf("yes it divisible by  5 or 3");
    }
    else{
        printf("it is not divisible by 5 or 3 ");
    }

    return 0 ; 

}