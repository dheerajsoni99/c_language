#include <stdio.h>
int main(){
char x;
printf("enter any character from a - z or A-Z");
scanf("c",&x);
if (x>='a' && x<='z'){
printf("entered character is lowercase ");
}
else if (x>='A' && x<='Z'){
printf("entered charcter is in uppercase ");
}
else {
printf("not a character ");
return 0;
}
}
