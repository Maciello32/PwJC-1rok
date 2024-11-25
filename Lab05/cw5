#include <stdio.h>
//
//  Wykorzystując funkcje rekurencyjną napisz wykonaj zamianę liczby w systemie dziesiętnym na system dwójkowy.
//
void to_binary(int n) {
    if (n > 1) {
        to_binary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int number;

    printf("Podaj liczbe w systemie dziesietnym: ");
    scanf_s("%d", &number);

    if (number == 0) {
        printf("0");
    }
    else {
        printf("Liczba w systemie dwojkowym: ");
        to_binary(number);
    }
    printf("\n");

    return 0;
}
