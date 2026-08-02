#include <stdio.h>

int main() {
    int num1, num2, num3, sum;
    
    printf("Enter three numbers separated by spaces: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    sum = num1 + num2 + num3;
    
    printf("The addition of the three numbers is: %d\n", sum);
    
    return 0;
}