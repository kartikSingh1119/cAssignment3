#include <stdio.h>

// Program to find the greatest common divisor (GCD) of two numbers using the Euclidean algorithm
// kartikSingh
// 2303511530009

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD is %d\n", a);

    return 0;
}
