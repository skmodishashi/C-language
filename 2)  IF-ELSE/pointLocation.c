//check whether point lies on which axis
#include <stdio.h>
int main()
{
   int x,y;
   printf("Enter the coordinates :");
   scanf("%d %d",&x,&y);
   if (x==0 && y==0)
   {
    printf(" The point is origin");
   }
   else if (x==0){
    printf("Lies on Y-axis");
   }
   else if (y==0)
   {
      printf("Lies on X-axis");
   }
   else
   {
     printf("The point does not lie on x or y axis");
   }
   
    return 0;
}