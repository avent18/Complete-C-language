#include<stdio.h>
#include<math.h>
int main(){
  float principal;
  float rate;
  int n;
  float time;
  float compoundInterest;
  float Amount;
  printf("Enter the principal : ");
  scanf("%f",&principal);
  printf("Enter the rate: ");
  scanf("%f",&rate);
  printf("Enter the time: ");
  scanf("%f",&time);
  printf("Enter the value 0f n: ");
  scanf("%d",&n);
  Amount  = principal*pow((1+rate/(100*n)),n*time);
  printf("The Amount is %f ",Amount);
  compoundInterest = Amount- principal;
  printf("the compoundInterest is %f ",compoundInterest);
  return 0;
}