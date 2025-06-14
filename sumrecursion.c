#include <stdio.h>

int sum(int n);

int main() {
    int result = sum(5);
    printf("Sum of 1 to 5 = %d\n", result);
    return 0;
}

int sum(int n) {
    if (n == 1) {
        return 1;
    }
    int sumnm1 = sum(n - 1);  // আগের সংখ্যা পর্যন্ত যোগফল
    int sumN = sumnm1 + n;    // এখনকার সংখ্যাটাও যোগ করো
    return sumN;
}
