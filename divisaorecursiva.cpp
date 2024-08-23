#include <stdio.h>

int divisao(int num1, int num2) {

    if (num1 < num2) {
        return 0;
    }

    return 1 + divisao(num1 - num2, num2);
}

int main() {

    int A, B;
    
    while (scanf("%d %d", &A, &B) != EOF) {

        if (B == 0) {
            printf("Divisor não pode ser zero.\n");

        } else {
            int resultado = divisao(A, B);
            printf("Resultado da divisao: %d\n", resultado);
        }

    }
    
    return 0;
}