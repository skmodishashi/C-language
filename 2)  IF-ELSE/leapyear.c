 //CODE FOR LEAP YEAR
 #include<stdio.h>
int main(){
    int n;
printf("Enter a Year :");
scanf("%d",&n);
if (n%4==0) 
{
     printf("yes, it is a leap year");
}
else{
    printf("NO, it is not leap year");
}
   return 0 ;

}