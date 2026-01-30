#include<stdio.h>
int main(){
    int marks[10]={87,65,87,23,32,80,45,25,57,89};
    for(int i=0;i<10;i++){
        if(marks[i]<35){printf("%d  ",i);}
    }
    return 0;
}