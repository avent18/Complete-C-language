#include<stdio.h>

int countVowel(char str[]){
  int count = 0;
  for(int i=0; str[i]!='\0'; i++){
    char ch = str[i];
    if(ch == 'a' ||ch =='e'||ch=='i'||ch=='o'||ch=='u'||ch == 'A' ||ch =='E'||ch=='I'||ch=='O'||ch=='U')
    count++;
  }

  return count;
}


int main(){
  char str[] = "HelloWorld";
  printf("the number of  vowels are : %d", countVowel(str));
  return 0;
}