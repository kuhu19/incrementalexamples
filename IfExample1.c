/* Program to check voting eligibilty */
#include <stdio.h>
#incllude <conio.h>

int main(){
  int age;
  
  printf("Enter your age: ");
  scanf("%d",&age);
  
  if(age>18){
    printf("You are eligible to vote");
  }else{
    printf("You are not eligible to vote");
  }
}
