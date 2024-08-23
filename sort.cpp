/*Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.
Entrada
A entrada contem três números inteiros.
Saída
Imprima a saída conforme foi especificado.*/

#include <stdio.h>

int main() {
    
    int a, b, c, A, B, C, sort;

    scanf("%d %d %d", &a, &b, &c);

    A = a;
    B = b;
    C = c;

    if (a > b) {
        sort = a;
        a = b;
        b = sort;
    }
    if (a > c) {
        sort = a;
        a = c;
        c = sort;
    }
    if (b > c) {
        sort = b;
        b = c;
        c = sort;
    }

    printf("%d\n%d\n%d\n", a, b, c);
    printf("\n");
    printf("%d\n%d\n%d\n", A, B, C);

    return 0;
}