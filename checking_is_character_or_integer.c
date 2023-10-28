#include <stdio.h>
#include <ctype.h>
int main(){
char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    int isDigit = isdigit(character);

    isDigit ? printf("%c is a digit.\n") : printf("%c is not a digit.\n");

return 0;

}
