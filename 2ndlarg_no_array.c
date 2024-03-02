#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("Invalid input. Number of elements should be greater than 1.\n");
        return 1; // Exit with error
    }
    int numbers[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    int max, secondMax;
    int maxPosition, secondMaxPosition;
    // Determine initial max and secondMax
    if (numbers[0] > numbers[1]) {
        max = numbers[0];
        maxPosition = 0;
        secondMax = numbers[1];
        secondMaxPosition = 1;
    } else {
        max = numbers[1];
        maxPosition = 1;
        secondMax = numbers[0];
        secondMaxPosition = 0;
    }
    // Find max and secondMax
    for (int i = 2; i < n; i++) {
        if (numbers[i] > max) {
            secondMax = max;
            secondMaxPosition = maxPosition;
            max = numbers[i];
            maxPosition = i;
        } else if (numbers[i] > secondMax) {
            secondMax = numbers[i];
            secondMaxPosition = i;
        }
    }
    printf("The second largest number is %d and its position is %d.\n", secondMax, secondMaxPosition + 1);
    return 0; // Exit normally
}
