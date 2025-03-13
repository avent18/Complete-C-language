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

  
    if(original==reverse){
      printf(" is a palindrome number");
    }else{
      printf(" is not a palindrome number");
    }
  
  
  return 0;
} 