// create a structure type 'Person' with name,salary and age as its attributes.Declare and initialize 2 variables for this.Print the name of first person and age of the other....
#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[20];
        int salary;
        int age;
    }a,b;

    strcpy(a.name,"Aman");
    a.salary = 50000;
    a.age = 24;

    strcpy(b.name,"Alok");
    b.salary = 70000;
    b.age = 25;

    printf("%s\n",a.name);
    printf("%d",b.age);

    return 0;
}