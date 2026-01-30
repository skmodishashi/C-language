 #include<stdio.h>
 int main(){
   //1 2
   //3 4


   // method 1 to fill 2D array
   //   int arr[2][2];
   //   arr[0][0] = 1;
   //   arr[0][1] = 2;
   //   arr[1][0] = 3;
   //   arr[1][1] = 4;
     
   // method 2
   // int arr[2][2] = {{1,2},{3,4}}; this is also written as {1,2,3,4}
   // for(int i=0;i<2;i++){
   //    for(int j=0;j<2;j++){
   //       printf("%d ",arr[i][j]);
   //    } printf("\n");
   // }


   int r,c;
   printf("Ener no. of rows : ");
   scanf("%d",&r);
   printf("Ener no. of columns : ");
   scanf("%d",&c);


  int arr[r][c];
  for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
          scanf("%d1",&arr[i][j]);
      } }
  for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
         printf("%d ",arr[i][j]);
      } printf("\n");
   }

    return 0;
 }