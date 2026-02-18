#include<stdio.h>
#include<math.h>
#include<limits.h>
int main(){
    //math.h
    float x = sqrt(7);  // sqrt and cbrt can be used by using math.h
    printf("%f\n",x);
    float y = cbrt(7);
    printf("%f\n\n",y);

    //limits.h
    int a = INT_MAX;
    printf("%d\n",a);
    int b = INT_MIN;
    printf("%d\n",b);
    long c = LONG_MAX;
    printf("%ld\n",c);
    long d = LONG_MIN;
    printf("%ld\n",d);
    return  0;
}