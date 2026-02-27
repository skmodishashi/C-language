//PROFIT OR LOSS PTA KARNE KE LIYE...
#include<stdio.h>
int main(){
int cp;
printf("Enter cost price : ");
scanf("%d",&cp);
int sp;
printf("Enter selling price : ");
scanf("%d",&sp);
if (sp>cp)
{
    printf("Profit");
}
if (cp>sp)
{
    printf("Loss");
}
if (cp==sp)
{
    printf("No profit , No loss");
}
return 0;
}