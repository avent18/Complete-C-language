#include<stdio.h>
int main(){
  int n , first=0, second=1, next;
  printf("Enter the number of terms: ");
  scanf("%d",&n);
  if(n<=0){
    printf("Enter the positive integers");
  }else if(n==1){
    printf("the fibonacci series is %d ", first);
  }else if(n==2){
    printf("the fibonacci series is %d %d ", first, second);
  }else{
    printf("the fibonacci series is %d %d ", first, second);
    for(int i=3;i<=n;i++){
      next = first + second;
      printf("\t%d", next);
      first = second;
      second= next;
    }
    printf("\t");
  }

  
  
  return 0;
}