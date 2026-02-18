#include<stdio.h>
int main(){
    int n;
    printf("Enter the value(1-7) :");
    scanf("%d",&n);
                    // it can also be done by if and elseif
    switch(n){
        case 1:
         printf("Monday");
         break;
        case 2:
         printf("Tuesday");
         break;
        case 3:
         printf("Wednesday");
         break;
        case 4:
         printf("Thursday");
         break;
        case 5:
         printf("Friday");
         break;
        case 6:
         printf("Saturday");
         break;
        case 7:
         printf("Sunday");
         break;
        default:
         printf("Invalid Input");
        
    }
}