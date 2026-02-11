// Crete a structure type 'book' with name,price and no. of pages as its attributes...
#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        float price;
        int noofPages;
    } a,b,c;

    a.price = 411.5;
    a.noofPages = 100;
    strcpy(a.name,"Secret Space");

    b.price = 300.5;
    b.noofPages = 150;
    strcpy(b.name,"Zero to One");

    c.price = 600;
    c.noofPages = 300;
    strcpy(c.name,"Albert");

    printf("%f\n",a.price);
    printf("%d\n",a.noofPages);
    printf("%s",a.name);

    return 0;
}