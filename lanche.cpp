/*Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.

1 hot dog R$ 4.00
2 x salada R$ 4.50
3 x bacon R$ 5.00
4 torrada simples R$ 2.00
5 refri R$ 1.50

Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.
Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.

3 2
Total: R$ 10.00

4 3
Total: R$ 6.00

2 3
Total: R$ 13.50*/

#include <stdio.h>

int main (){

    int cdg, qtd; 
    float val, total;

    scanf("%d%d", &cdg, &qtd);

    printf("Total: R$ %.2f", total);

    return 0;
}