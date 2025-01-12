#include <stdio.h>
// 
// Dana jest następująca funkcja rekurencyjna: 
//    funkcja wynik( i )
//      jeżeli i < 3
//  zwróć 1 i zakończ;
//  w przeciwnym razie
//    jeżeli i mod 2 = 0
//  zwróć wynik(i – 3) + wynik(i – 1) + 1
//    w przeciwnym razie
//  zwróć wynik(i – 1) mod 7
//
int wynik(int i);

int main() {
    int i;
    for (i = 1; i <= 8; i++) {
        printf("wynik(%d) = %d\n", i, wynik(i));
    }
    return 0;
}

int wynik(int i) {
    if (i < 3) {
        return 1;
    }

    if (i % 2 == 0) {
        return wynik(i - 3) + wynik(i - 1) + 1;
    }

    return wynik(i - 1) % 8;
}
