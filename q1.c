#include<stdio.h>
#include<math.h>
int Xorring(int x){
  int i;
  int temp=1;
  for(i=1;i<x;i++){
    temp=temp^(i+1);
  }
  return temp;
}
int update(int A[],int x,int y){
  A[x]=y;
  return -1;
}
int main(){
  int s;
  scanf("%d",&s);
  int arr[s];
  int i;
  for(i=0;i<s;i++){
    scanf("%d",&arr[i]);
  }
  int r;
  int k,j;
  scanf("%d",&r);
  int arr2d[r][3];
  for(k=0;k<r;k++){
    for(j=0;j<3;j++){
      scanf("%d",&arr2d[k][j]);
    }
  }
  int arranw[r];
  int sum=0;
  for(i=0;i<r;i++){
    if(arr2d[i][0]==1){
      arranw[i]=update(arr,arr2d[i][1],arr2d[i][2]);

    }
    if(arr2d[i][0]==2){
      for(k=arr2d[i][1];k<=arr2d[i][2];k++){
      sum=sum+ Xorring(arr[k]);
    }
    arranw[i]=(sum);
    sum=0;
  }
  }
  for(i=0;i<r;i++){
    printf("%d ",arranw[i]);
  }
  return 0;
}
