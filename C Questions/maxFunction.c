#include<stdio.h>


int maxOfThree(int a, int b, int c){
  if(a>b && a>c) return a;
  if(b>c) return b;
  return c;
}




int main(){
  int a=3, b=8, c=9;
  printf("the max of three numbers is %d ",maxOfThree(a, b, c));
  }