#include<stdio.h>
int main(){
  int length;
  int breadth;
  printf("Enter the length: ");
  scanf("%d",&length);
  printf("Enter the breadth: ");
  scanf("%d",&breadth);
  int perimeter;
  perimeter = 2 * (length + breadth);
  printf("The perimeter is %d ",perimeter);
  return 0;
}