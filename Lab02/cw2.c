#include <stdio.h>
//
// Napisz program, który pozwoli na wczytanie 10 liczb i wyznaczeniu ilości oraz sumy liczb ujemnych 
// i dodatnich podanych przez użytkownika.
//
int main() {
    double liczba;
    int dodatnie = 0, ujemne = 0;
    double suma_dodatnich = 0, suma_ujemnych = 0;


    for (int i = 1; i <= 10; i++) {
        printf("Podaj liczbe %d: ", i);
        scanf_s("%lf", &liczba);

        // Sprawdzenie, czy liczba jest dodatnia, ujemna, czy równa 0
        if (liczba > 0) {
            dodatnie++;
            suma_dodatnich += liczba;
        }
        else if (liczba < 0) {
            ujemne++;
            suma_ujemnych += liczba;
        }
        // Liczby równe 0 nie są liczone ani w dodatnich, ani w ujemnych
    }


    printf("\nLiczba liczb dodatnich: %d\n", dodatnie);
    printf("Suma liczb dodatnich: %.2f\n", suma_dodatnich);
    printf("Liczba liczb ujemnych: %d\n", ujemne);
    printf("Suma liczb ujemnych: %.2f\n", suma_ujemnych);

    return 0;
}
