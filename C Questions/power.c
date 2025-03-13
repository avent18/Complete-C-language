#include<stdio.h>

int power(int base, int exp){
  if(exp==0) return 1;
  return base*power(base, exp-1);
}

int main(){
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  int e;
  printf("Enter the exponent: ");
  scanf("%d", &e);
  printf("power : %d\n",power(n, e));
}