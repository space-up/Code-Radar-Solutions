#include <stdio.h>  

int main() {  
    int number, shiftPositions;    
    scanf("%d", &number);  
    scanf("%d", &shiftPositions);  

    // Perform left shift operation  
    int result = number << shiftPositions;  

    // Output the result  
    printf("%d\n", number, shiftPositions, result);  

    return 0;  
}  