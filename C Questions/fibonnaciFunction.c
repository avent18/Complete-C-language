#include<stdio.h>


void fibonnac(int n){
  int t1=0, t2=1, nextTerm;
  for(int i=1;i<=n; i++){
    printf("%d\t",t1);
    nextTerm = t1+t2;
    t1=t2;
    t2= nextTerm;
  }
}


int main(){
  int n= 10;
  fibonnac(n);
  return 0;
  }