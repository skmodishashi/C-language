//write a program to store no. of students and their phy,chem and maths marks....
#include<stdio.h>
int main(){
    int nostd,sub;;
   printf("Ener no. of Students : ");
   scanf("%d",&nostd);
   printf("Ener no. of Subjects : ");
   scanf("%d",&sub);
  int arr[nostd][sub];
  for(int i=0;i<nostd;i++){
      for(int j=0;j<sub;j++){
          scanf("%d1",&arr[i][j]);
      } }
  for(int i=0;i<nostd;i++){
      for(int j=0;j<sub;j++){
         printf("%d ",arr[i][j]);
      } printf("\n");
   }

    return 0;
}