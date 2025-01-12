#include <stdio.h>
//
// Napisać prosty kalkulator wykonujący działanie matematyczne (+, -, /, *) 
// na dwóch liczbach podanych z klawiatury, wykorzystując instrukcję switch.
//

int main() {
    double A, B, wynik;
    char operator;

    printf("Podaj pierwsza liczbe: ");
    scanf_s("%lf", &A);

    printf("Podaj operator (+, -, *, /): ");
    scanf_s(" %c", &operator);

    printf("Podaj druga liczbe: ");
    scanf_s("%lf", &B);

    switch (operator) {
    case '+':
        wynik = A + B;
        printf("Wynik: %.2f\n", wynik);
        break;
    case '-':
        wynik = A - B;
        printf("Wynik: %.2f\n", wynik);
        break;
    case '*':
        wynik = A * B;
        printf("Wynik: %.2f\n", wynik);
        break;
    case '/':
        if (B != 0) {
            wynik = A / B;
            printf("Wynik: %.2f\n", wynik);
        }
        else {
            printf("Blad: Dzielenie przez zero\n");
        }
        break;
    default:
        printf("Nieprawidlowy operator\n");
        break;
    }

    return 0;
}
