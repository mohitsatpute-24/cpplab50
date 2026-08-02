#include <stdio.h>

int main() {
    int n, sum = 0, remainder;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    // Store original number for the final print statement
    int original_num = n; 
    
    while (n != 0) {
        remainder = n % 10; // Extract the last digit
        sum += remainder;   // Add it to the sum
        n /= 10;            // Remove the last digit from the number
    }
    
    printf("The addition of the digits in %d is: %d\n", original_num, sum);
    
    return 0;
}