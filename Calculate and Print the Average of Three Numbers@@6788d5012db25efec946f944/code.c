#include <stdio.h>
int main() {
    int a,b,c;
    float x;
    scanf("%d %d %d", &a ,&b, &c);
    scanf("%f" &x);
    x = (a+b+c)/3;
    printf("Average: %f",x);
    return 0;
}