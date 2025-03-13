#include<stdio.h>

int gcd(int a, int b){
  if(b==0) return a;
  return gcd(b, a%b);
}

int main(){
  int x=56, y=98;
  printf("GCD : %d\n", gcd(x,y));
}