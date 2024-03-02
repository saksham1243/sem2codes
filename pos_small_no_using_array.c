//write a program to print to find the position of  smallest number of n numbers using array
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input. Number of elements should be greater than 0.\n");
        return 1; // Exit with error
    }
    int numbers[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    int min = numbers[0];
    int minPosition = 0;
    for (int i = 1; i < n; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
            minPosition = i;
        }
    }
    printf("The smallest number is %d and its position is %d.\n", min, minPosition + 1);
    return 0; // Exit normally
}