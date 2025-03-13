#include<stdio.h>
int main(){
  int n ;
  long long factorial =1;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  if(n<0){
    printf("No factorial for negative no's");
  }else{
    for (int i = 1; i <= n; i++)
    {
      factorial= factorial*i;
    }
    
  }
  printf("The Factorial of number is %lld ",factorial);
  
  return 0;
}