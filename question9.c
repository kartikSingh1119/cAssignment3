#include <stdio.h>

// Program to count the number of digits in a given integer using a while loop
// kartikSingh
// 2303511530009

int main() {
    int n, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n == 0) count = 1;
    else {
        while (n != 0) {
            n /= 10;
            ++count;
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
