//AREA IS GREATER THAN PERIMETER OR NOT
#include<stdio.h>
int main(){
int length;
printf("Enter length : ");
scanf("%d",&length);
int breadth;
printf("Enter breadth : ");
scanf("%d",&breadth);
int area=length * breadth;
int perimeter=2*(length+breadth);
if (area>perimeter)
{
    printf("Area is greater than perimeter");
}
else
{
    printf("area is less than perimeter");
}
return 0;
}