#include<stdio.h>
int main() {
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d"&b);
    if (a > 0 || b > 0) {
        printf("True\n");
    }
    else if (a < 0 || b < 0) {
        printf("False\n");
    }

    return 0;
}