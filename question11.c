#include <stdio.h>
#include <math.h>

// Program to check if a given number is an Armstrong number
// kartikSingh
// 2303511530009

int main() {
    int n, originalNum, remainder, result = 0, nDigits = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalNum = n;

    // Find the number of digits
    for (int temp = n; temp != 0; ++nDigits) {
        temp /= 10;
    }

    // Calculate the sum of the powers of its digits
    for (int temp = n; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, nDigits);
    }

    if (result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}
