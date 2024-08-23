/*Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. 
As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.
Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).
Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido.*/

#include <stdio.h>

int main(){

    int N;
    int nota100, nota50, nota20, nota10, nota5, nota2, nota1;

    scanf("%d", &N);

    if (N <= 0 || N >= 1000000) {
        return 1;
    }

    printf("%d\n", N);

    nota100 = N / 100;
    N = N % 100;

    nota50 = N / 50;
    N = N % 50;

    nota20 = N / 20;
    N = N % 20;

    nota10 = N / 10;
    N = N % 10;

    nota5 = N / 5;
    N = N % 5;

    nota2 = N / 2;
    N = N % 2;

    nota1 = N;

    printf("%d nota(s) de R$ 100,00\n", nota100);
    printf("%d nota(s) de R$ 50,00\n", nota50);
    printf("%d nota(s) de R$ 20,00\n", nota20);
    printf("%d nota(s) de R$ 10,00\n", nota10);
    printf("%d nota(s) de R$ 5,00\n", nota5);
    printf("%d nota(s) de R$ 2,00\n", nota2);
    printf("%d nota(s) de R$ 1,00\n", nota1);

    return 0;
}