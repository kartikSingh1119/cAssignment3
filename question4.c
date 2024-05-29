#include <stdio.h>

// Program to calculate the factorial of a given number using a while loop
// kartikSingh
// 2303511530009

int main() {
    int n, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int i = n;
    while(i > 1) {
        factorial *= i;
        i--;
    }

    printf("Factorial of %d is: %d\n", n, factorial);

    return 0;
}
