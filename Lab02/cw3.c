#include <stdio.h>
//
// Dany jest ciąg n liczb (n>0), napisz program pozwalający na obliczenie sumy wszystkich liczb parzystych w danym ciągu.
//
int main() {
    int n;  // Liczba elementów w ciągu
    int liczba;  
    int suma_parzystych = 0;  


    printf("Podaj liczbe elementow ciagu: ");
    scanf_s("%d", &n);

    // Pętla do wczytywania liczb i sumowania liczb parzystych
    for (int i = 1; i <= n; i++) {
        printf("Podaj liczbe %d: ", i);
        scanf_s("%d", &liczba);

        // Sprawdzenie, czy liczba jest parzysta
        if (liczba % 2 == 0) {
            suma_parzystych += liczba;  // Dodajemy liczbę do sumy, jeśli jest parzysta
        }
    }

    printf("Suma liczb parzystych w ciagu: %d\n", suma_parzystych);

    return 0;
}
