#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char alp;
    scanf("%c",&alp);
    printf("You entered: %c/n", alp);
    return 0;
}