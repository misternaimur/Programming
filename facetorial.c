#include <stdio.h>

int factorial(int n);

int main() {
    int n = 5; // Define the number to find factorial of
    printf("Factorial is: %d\n", factorial(n));
    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    int factNm1 = factorial(n - 1);
    int factN = factNm1 * n;
    return factN;
}