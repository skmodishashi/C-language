#include <stdio.h>
void greet() //FUNCTIONS ko is tarah se likhte hai
            // greet name hai
{
    printf("Good Morning\n");
    printf("How are You?\n");
    return; //return ka mtlb function khatam
}
int main()
{
    greet(); //calling a function
    greet(); //calling a function 
    greet(); //calling a function

    return 0;
}