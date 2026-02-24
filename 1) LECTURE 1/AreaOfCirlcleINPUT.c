//Area of Circle by entering the radius
#include<stdio.h>
int main(){
        float radius;
        printf(" Enter Radius:");
        scanf("%f",&radius);
        float pi = 3.1415;
        float area = pi* radius*radius;
        printf("Area of cirlce is:%f",area);
        
    return 0 ;
}