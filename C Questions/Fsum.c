#include<stdio.h>

int sum(int a, int b ){
  return a + b ;
}

int main(){
  int x = 5 , y=6;
  int result = sum(x,y);
  printf(" the sum is %d\n",result);
  return 0;
}