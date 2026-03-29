#include<stdio.h>
void england(){
    printf("You are in England\n");//6
    return;//7
}
void australia(){
    printf("You are in australia\n");//4
    england();//5
    return;//8
}
void india(){
    printf("You are in India\n");//2
    australia();//3
    return;//9
}
int main(){
    india(); //1
    return 0;//10
} //numbers hai ki samjho kaise steps computer main chalta hai