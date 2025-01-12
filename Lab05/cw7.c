#include <stdio.h>
//
// Wykorzystując funkcje rekurencyjną napisz wykonaj zamianę liczby w systemie
//dziesiętnym na system dwójkowy.
//
void NaBinarny(int n) {
    if (n > 1) {
        NaBinarny(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int number;

    printf("Podaj liczbe w systemie dziesietnym: ");
    scanf_s("%d", &number);

    printf("Liczba %d w systemie binarnym to: ", number);
    NaBinarny(number);
    printf("\n");

    return 0;
}
