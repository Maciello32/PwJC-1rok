#include <stdio.h>
//
// Wykorzystując wskaźniki należy zaproponować implementację do poniższych zadań.
//1. Napisz program, który:
// - wypisze na ekran adres zadeklarowanej zmiennej,
// - pobierze wartość zmiennej, wypisze na ekran jej adres oraz wartość,
// - przy użyciu wskaźników obliczy różnicę dwóch liczb,
// - przy użyciu wskaźników obliczy średnią trzech liczb,
//
int main() {
    // Zadanie 1
    int a = 10;
    printf("Adres zmiennej 'a': %p\n", (void*)&a);

    // Zadanie 2
    int* ptr = &a;
    printf("Adres zmiennej 'a' za pomoca wskaznika: %p\n", (void*)ptr);
    printf("Wartosc zmiennej 'a' za pomoca wskaznika: %d\n", *ptr);

    // Zadanie 3
    int b = 20;
    int* ptr_b = &b;
    int roznica = *ptr_b - *ptr;
    printf("Roznica dwoch liczb: %d - %d = %d\n", *ptr_b, *ptr, roznica);

    // Zadanie 4
    int c = 30;
    int* ptr_c = &c;
    float srednia = (*ptr + *ptr_b + *ptr_c) / 3.0;
    printf("Srednia trzech liczb: (%d + %d + %d) / 3 = %.2f\n", *ptr, *ptr_b, *ptr_c, srednia);

    return 0;
}
