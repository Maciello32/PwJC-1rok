#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, a;

    printf("Podaj liczbe elementow tablicy (n): ");
    scanf_s("%d", &n);

    printf("Podaj wartosc poczatkowa (a): ");
    scanf_s("%d", &a);

    int* array = (int*)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Blad alokacji pamieci.\n");
        return 1;
    }

    for (int i = n - 1; i >= 0; i--) {
        array[i] = a;
        a -= 5;
    }

    printf("Wynikowa tablica: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    return 0;
}
