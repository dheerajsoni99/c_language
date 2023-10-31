#include <stdio.h>
int main() {
int age;
  printf("Please enter your age : \n");
  scanf("%d",&age);
  if(age>=0 && age<18){
    printf("Not eligible to vote\n");
  }else if(age>=18 && age<=110){
    printf("You are eligible to vote\n");
  }else{
    printf("invalid age entered please try again \n);

      }

}
