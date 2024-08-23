#include <stdio.h>

int main() {

    const int colunas = 10;
    int matriz[3][colunas];
    
    for (int i = 0; i < colunas; ++i) {

        scanf("%d", &matriz[0][i]);
    }
    
    for (int i = 0; i < colunas; ++i) {

        scanf("%d", &matriz[1][i]);
    }
    
    for (int i = 0; i < colunas; ++i) {

        matriz[2][i] = matriz[0][i] * matriz[1][i];
    }
    
    for (int i = 0; i < colunas; ++i) {

        if (i > 0) printf(" ");
        printf("%d", matriz[2][i]);
    }

    printf("\n");

    return 0;
}