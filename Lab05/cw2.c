#include <stdio.h>
//
// Napisz program wyznaczający n-ty wyraz ciągu zdefiniowanego przez następujący wzór rekurencyjny:
//  an={-1 dla n=1     -an-1*n-2 dla n>1
int wyrazCiagu(int n) {
    if (n == 1) {
        return -1; 
    }
    else {
        return -wyrazCiagu(n - 1) * (n - 2);
    }
}

int main() {
    int n;

    printf("Podaj numer wyrazu ciagu (n): ");
    scanf_s("%d", &n);


    printf("n-ty wyraz ciagu: %d\n", wyrazCiagu(n));

    return 0;
}
