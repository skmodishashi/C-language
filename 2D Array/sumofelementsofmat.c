#include<stdio.h>
int main(){
    
   int r,c;
   printf("Ener no. of rows : ");
   scanf("%d",&r);
   printf("Ener no. of columns : ");
   scanf("%d",&c);


  int arr[r][c];
  for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
          scanf("%d",&arr[i][j]);
      } }
      int sum = 0;
      printf("The filled elements are : \n");
  for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
         printf("%d ",arr[i][j]);
         sum += arr[i][j];
      } printf("\n");
   }
printf("The sum of all the elements are : %d",sum);

    return 0;
}