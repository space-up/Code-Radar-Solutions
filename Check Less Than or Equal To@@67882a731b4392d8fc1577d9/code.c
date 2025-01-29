#include <stdio.h>
int main() {
    float a;
    float b;
    scanf("%f%f",&a,&b);
    if(a<=b){
        printf("True");
    }
    if(a>b){
        printf("False");
    }

    return 0;
}