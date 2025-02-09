#include <stdio.h>
//Grupa laboratoryjna składa się z n studentów(wartość n podaje użytkownik).
//Wprowadzamy liczbę punktów dla każdego studenta.Napisz program, 
//który obliczy średnią liczbę punktów w grupie z wykorzystaniem pętli while.
int main() {
    int n, i = 0;
    float suma = 0, punkty;

    printf("Podaj liczbe studentow: ");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("Liczba studentow musi byc wieksza od zera.\n");
        return 1;
    }

    while (i < n) {
        printf("Podaj liczbe punktow dla studenta %d: ", i + 1);
        scanf_s("%f", &punkty);
        suma += punkty;
        i++;
    }

    printf("Srednia liczba punktow w grupie: %.2f\n", suma / n);

    return 0;
}
