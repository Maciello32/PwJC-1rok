#include <stdio.h>
//
// Napisz program, w którym użytkownik podaje liczby do momentu wpisania wartości mniejszej od 0, 
// po czym wyświetla sumę , średnią oraz wartość maksymalną dla wprowadzonych liczb.
//
int main() {
    double liczba, suma = 0, maksymalna = -1e9; //-1e9 oznacza liczbę zmiennoprzecinkową w notacji naukowej (eksponencjalnej), która odpowiada wartości -1 * 10^9 czyli miliard
    int licznik = 0;

    while (1) {
        printf("Podaj liczbe (mniejsza od 0 konczy program): ");
        scanf_s("%lf", &liczba);

        if (liczba < 0) {
            break; 
        }

        suma += liczba;
        if (liczba > maksymalna) {
            maksymalna = liczba;
        }

        licznik++;
    }

    if (licznik > 0) {
        double srednia = suma / licznik;

        printf("Suma wprowadzonych liczb: %.2f\n", suma);
        printf("Srednia wprowadzonych liczb: %.2f\n", srednia);
        printf("Maksymalna wprowadzona liczba: %.2f\n", maksymalna);
    }
    else {
        printf("Nie wprowadzono zadnych liczb.\n");
    }

    return 0;
}
