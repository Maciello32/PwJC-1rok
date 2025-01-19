#include <stdio.h>

int main() {

    printf("\n");
    int tab[10];
    tab[0] = 3;
    for (int i = 1; i < 10; i++) {
        tab[i] = tab[i - 1] + 3;
        if (tab[i] % 2 == 0) {
            printf("%d\n", tab[i]);
            }
        }
    }
