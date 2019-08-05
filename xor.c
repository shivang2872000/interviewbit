#include<stdio.h>
int main(){
  int x;
  scanf("%d",&x);
  int i;
  int temp=1;
  for(i=1;i<x;i++){
    temp=temp^(i+1);
  }
  printf("%d",temp);
  return 0;
}
