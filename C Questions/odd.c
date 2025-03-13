#include<stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int sum = 0;
  for(int i=1; i<=n;i+=2){
    sum += i;
  }
  printf("Sum of odd numbers up to %d is: %d", n, sum);
  return 0;
}