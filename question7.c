#include <stdio.h>

// Program to find the sum of the digits of a given integer using a while loop
// kartikSingh
// 2303511530009

int main() {
    int n, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of the digits is: %d\n", sum);

    return 0;
}
