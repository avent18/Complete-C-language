#include<stdio.h>
int main(){
  int n, reverse=0, remainder ;
  printf("Enter the number : ");
  scanf("%d",&n);
  int original=n;
  
  while(n!=0){
   remainder=n%10;
   reverse=reverse*10+remainder ;
   n=n/10 ;
  }

  
    printf("The reverse of a number is %d ",reverse);
  
  
  return 0;
} 