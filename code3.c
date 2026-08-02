#include <stdio.h>

int main() {
    int arr[4];
    int sum = 0;
    
    printf("Enter 4 integer elements:\n");
    for(int i = 0; i < 4; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
    
    printf("The addition of all array elements is: %d\n", sum);
    
    return 0;
}