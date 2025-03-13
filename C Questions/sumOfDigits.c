#include<stdio.h>
int main(){
  int n;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  int sum= 0;
  while(n!=0){
    sum=sum+n%10;
    n=n/10;
  }

  printf("the sum of digits is %d ",sum);
  return 0;
}