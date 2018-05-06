#include <stdio.h>

int main(void){
    char character;
    printf("Enter single character: ");
    scanf("%c", &character);

    if (character >= 'a' && character <= 'z'){
        printf("This is mall letter.\n");
    }
    else if (character >= 'A' && character <= 'Z'){
        printf("This is big letter.\n");
    }
    else if (character >= '0' && character <= '9'){
        printf("This is number.\n");
    }
    // DGFGDGDGDGDGDGDFGFGFGDFDFDGFGFG
}
