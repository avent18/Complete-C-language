#include<stdio.h>
int main(){
  float principal;
  float rate;
  float time;
  float simpleInterest;
  printf("Enter the principal : ");
  scanf("%f",&principal);
  printf("Enter the rate: ");
  scanf("%f",&rate);
  printf("Enter the time: ");
  scanf("%f",&time);
  float  Area;
  simpleInterest = (principal*rate*time)/100;
  printf("The simpleInterest is %f ",simpleInterest);
  return 0;
}