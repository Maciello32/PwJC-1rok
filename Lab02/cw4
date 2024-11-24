#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//
// Wykorzystując algorytm z zadania 3, napisz program który pozwoli użytkownikowi na wylosowanie n liczb 
// z przedziału (-10,45) i obliczy sumę wszystkich liczb parzystych w danym ciągu.
//
int main() {
    int n;
    int liczba;
    int suma_parzystych = 0;

    // Inicjalizacja generatora liczb losowych
    srand(time(NULL));

    // Wczytanie liczby liczb do wylosowania
    printf("Podaj liczbe liczb do wylosowania: ");
    scanf_s("%d", &n);

    // Pętla do wylosowania n liczb i obliczenia sumy liczb parzystych
    for (int i = 1; i <= n; i++) {
        // Losowanie liczby z przedziału (-10, 45)
        liczba = rand() % 56 - 10;  // Losuje liczby w przedziale od -10 do 45

        printf("Liczba %d: %d\n", i, liczba);

        // Sprawdzenie, czy liczba jest parzysta
        if (liczba % 2 == 0) {
            suma_parzystych += liczba;  // Dodajemy liczbę do sumy, jeśli jest parzysta
        }
    }

    printf("Suma liczb parzystych w ciagu: %d\n", suma_parzystych);

    return 0;
}
