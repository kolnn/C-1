#include <stdio.h>

int convCase(int ch) {
    const int diff = 'a' - 'A';
    if (ch >= 'A' && ch <= 'Z')
        return ch + diff;
    else if (ch >= 'a' && ch <= 'z')
        return ch - diff;
    else
        return ch; 
}

int main(void) {
    char inputString[100];

    printf("Input> ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strlen(inputString) - 1] = '\0';

    for (int i = 0; i < strlen(inputString); i++) {
        inputString[i] = convCase(inputString[i]);
    }

    printf("Output> %s\n", inputString);

    return 0;
}
