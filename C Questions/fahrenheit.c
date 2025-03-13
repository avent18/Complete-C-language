#include<stdio.h>
int main(){
  float fahrenheit;
  float celcius;
  printf("Enter the value: ");
  scanf("%f",&fahrenheit);
  celcius = (fahrenheit-32)*5/9;
  printf("The temperature in celcius is %0.2f ",celcius);
  return 0;
}