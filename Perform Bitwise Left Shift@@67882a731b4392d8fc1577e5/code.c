#include <stdio.h>  

int main() {  
    int number, shiftPositions;  

    // Get user input  
    printf("Enter the number: ");  
    scanf("%d", &number);  
    printf("Enter the number of positions to shift left: ");  
    scanf("%d", &shiftPositions);  

    // Perform left shift operation  
    int result = number << shiftPositions;  

    // Output the result  
    printf("Result of left shifting %d by %d positions: %d\n", number, shiftPositions, result);  

    return 0;  
}  