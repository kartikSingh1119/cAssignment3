#include <stdio.h>

// Program to reverse a given integer using a while loop
// kartikSingh
// 2303511530009

int main() {
    int n, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    printf("Reversed number is: %d\n", reversed);

    return 0;
}
