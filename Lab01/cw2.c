#include <stdio.h>
//
// Napisać program, który sprawdza, czy podana liczba całkowita, wczytana z klawiatury jest parzysta, czy nieparzysta. (operator %).
//
int main() {
    int liczba;

    printf("Podaj liczbe calkowita: ");
    scanf_s("%d", &liczba);

    if (liczba % 2 == 0) {
        printf("Liczba %d jest parzysta.\n", liczba);
    }
    else {
        printf("Liczba %d jest nieparzysta.\n", liczba);
    }

    return 0;
}
