#include <stdio.h>
//
// Napisz funkcje rekurencyjna wyznaczajaca ciag Fibonacciego
//
int fibo(int n) {
    if (n <= 1) {
        return n;  // Bazowy przypadek: fib(0) = 0, fib(1) = 1
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int n;
    printf("Podaj numer elementu ciagu Fibonacciego: ");
    scanf_s("%d", &n);

    printf("%d-ty element ciagu Fibonacciego to: %d\n", n, fibo(n));

    return 0;
}
