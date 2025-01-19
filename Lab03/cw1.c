#include <stdio.h>

int main() {

    printf("\n");
    int tab[10];
    tab[0] = 3;
    printf("%d\n", tab[0]);
    for (int i = 1; i < 10; i++) {
        tab[i] = tab[i - 1] + 3;
        printf("%d\n", tab[i]);
  
    }
    return 0;
}
