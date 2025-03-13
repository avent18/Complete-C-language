#include<stdio.h>
#include<string.h>

int ispalindrome(char str[]){
  int n = strlen(str);

  for(int i =0; i<=n/2; i++){
    if(str[i]!=str[n-i-1]) return 0;
  }
  return 1;
}


int main(){
  char str[] = "naven";
  
  printf(" %d\n",ispalindrome(str) );
  }