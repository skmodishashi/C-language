#include<stdio.h>
int main(){
int n;
printf("enter percentage");
scanf("%d",&n);
 if (n>80)
printf("A Grade\n");
else if (n>60)
printf("B Grade\n");
else if (n>40)
printf("C Grade\n");
 else 
printf("D Grade\n");
    return 0;
}