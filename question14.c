#include <stdio.h>

// Program to find the sum of all even numbers and the sum of all odd numbers from 1 to n
// kartikSingh
// 2303511530009

int main() {
    int n, sumEven = 0, sumOdd = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
    }

    printf("Sum of even numbers from 1 to %d is: %d\n", n, sumEven);
    printf("Sum of odd numbers from 1 to %d is: %d\n", n, sumOdd);

    return 0;
}
