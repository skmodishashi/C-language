//TO FIND VOLUME OF SPHERE
#include<stdio.h>
int main(){
    float radius ;
    printf("enter radius:");
    scanf("%f",&radius);

    float v = (4 * 3.14 * radius * radius * radius) / 3;
    printf("The Volume is : %f",v);

    return 0;

}