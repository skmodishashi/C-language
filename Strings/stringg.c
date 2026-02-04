#include<stdio.h>
int main(){
    char str[]="Hello everyone\0"; //agar isme \0 add nhi bhi krte to koi dikkat nhi hota wo khud add ho jta hai.....
    int i=0;                       // "Hello everyone\0" == "Hello everyone"
    while(str[i]!='\0'){            //   dono me size of string same hoga 15 char(alphabet+spaces+null)
        printf("%c",str[i]);
        i++;
    }
    return 0;
}

  // arr[i] == i[arr] == *(arr+i) == *(i+arr)