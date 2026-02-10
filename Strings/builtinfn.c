#include<stdio.h>
#include<string.h>
int main(){
    //1. strlen()==length of string--> ye size nhi kyuki size \0 bhi hota jo ki hide hota h wo size me consider hota h
    char str[]= "Hello one";
    int x = strlen(str);
    printf("%d\n",x);

    //2. strcpy(s2,s1)==string copy copies the content of string s1 to s2
    char s1[12]="Hello one";
    char s2[12];
    strcpy(s2,s1);  // it's a deep copy
    printf("%s\n",s2);

    //3. strcat(s3,s4)==Concat(both string added) s3 string with s4 and stores result in s3
    char s3[] = "Hello"; // s3 me size dono ke size ko add karkr jitna hoga utna dalna hoga kyuki wo pura s3 me add ho rha ya phir size dalo hi mat.....
    char s4[] = " One";
    strcat(s3,s4);
    printf("%s\n",s3);

    //4. strcmp(s1,s2)==compares the two strings

    //5. strncpy(s1,s2)==copy substring of size len starting from s1 char pointer into s2

    return 0;
}