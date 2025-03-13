#include<stdio.h>
int main(){
  int perpendicular;
  int base;
  printf("Enter the perpendicular: ");
  scanf("%d",&perpendicular);
  printf("Enter the base: ");
  scanf("%d",&base);
  float  Area;
  Area = (float)1/2* (perpendicular *base);
  printf("The Area is %f ",Area);
  return 0;
}