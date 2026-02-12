#include<stdio.h>
// typedef float realnumber; // typedef mtlb kisi bhi datatype ka name hum kisi or se rakh skte h tpyedef ka use krke jiase isme float ka name realnumber ho gya h ab kahi bhi realnumber lenge to float value lega...
//  ex -->>  realnumber x = 3.1415;
int main(){
    typedef struct book{
        char bookname[20];
        int noofpages;
        int costofbook;
    }book;

    book a;
    book b;
    book c;
    return 0;
}