#include <stdio.h>
//
// Funkcja rekurencyjna obliczająca NWD
// 
int nwd(int a, int b) {
    if (b == 0) {
        return a;  // Jeśli b jest zerem, to NWD to a
    } else {
        return nwd(b, a % b);  // Rekurencyjne wywołanie dla b i a % b
    }
}

int main() {
    int a, b;

    printf("Podaj dwie liczby: ");
    scanf_s("%d %d", &a, &b);

    printf("Największy wspólny dzielnik (%d, %d) wynosi: %d\n", a, b, nwd(a, b));

    return 0;
}
