// input and output without using loops
// %s is used to print string by adding #include<string.h>
// gets to take input and puts for output
#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    // scanf("%s",str); //only the first word will be considered
    // scanf("%[^\n]s",str); //entire sentence will be considered but lengthy
    
    gets(str); //entire sentence will be considered
    
    // printf("%s",str);
    puts(str); // same as print in string
    return 0;
}