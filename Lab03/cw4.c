#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Napisz program znajdujący minimalną wartość w tablicy n-elementowej, elementy tablicy są losowane z przedziału [-23, 50].
int main() {
    int rozmiar;
    printf("Podaj liczbe elementow tablicy: ");
    scanf_s("%d", &rozmiar);

    if (rozmiar <= 0) {
        printf("Niepoprawna liczba elementow!\n");
        return 1;
    }

    int* tablica = (int*)malloc(rozmiar * sizeof(int));
    if (tablica == NULL) {
        printf("Blad alokacji pamieci!\n");
        return 1;
    }

    srand(time(NULL));
    int minimum = 50;

    printf("Tablica: ");
    for (int i = 0; i < rozmiar; i++) {
        tablica[i] = (rand() % 74) - 23;
        printf("%d ", tablica[i]);
        if (tablica[i] < minimum) {
            minimum = tablica[i];
        }
    }

    printf("\nNajmniejsza wartosc: %d\n", minimum);

    free(tablica);
    return 0;
}
