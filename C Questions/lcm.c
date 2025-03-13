#include<stdio.h>
int main(){
  int n1, n2, lcm, max;
  printf("Enter n1: ");
  scanf("%d",&n1);
  printf("Enter n2: ");
  scanf("%d",&n2);
   max= (n1>n2)?n1:n2;
   for(lcm=max; lcm<=n1*n2; lcm+=max){
    if(lcm%n1==0  & lcm%n2==0){
      break;
    }
   }
   printf("the lcm of two integers is %d ", lcm);
  

  
  return 0;
}