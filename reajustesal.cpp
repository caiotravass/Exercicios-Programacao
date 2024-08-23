/*A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:

Salário

0 - 400.00
400.01 - 800.00
800.01 - 1200.00
1200.01 - 2000.00
Acima de 2000.00

Percentual de Reajuste

15%
12%
10%
7%
4%

Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.
Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.
Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste (ambos devem ser apresentados com 2 casas decimais) e o percentual de reajuste ganho, conforme exemplo abaixo.

400.00
Novo salario: 460.00
Reajuste ganho: 60.00
Em percentual: 15 %

800.01
Novo salario: 880.01
Reajuste ganho: 80.00
Em percentual: 10 %

2000.00
Novo salario: 2140.00
Reajuste ganho: 140.00
Em percentual: 7 %*/

#include <stdio.h>

int main() {
    
    float sal, novosal, ganho;
    int reajuste;


    scanf("%f", &sal);


    if (sal >= 0 && sal <= 400.00) {
        reajuste = 15;
    } else if (sal >= 400.01 && sal <= 800.00) {
        reajuste = 12;
    } else if (sal >= 800.01 && sal <= 1200.00) {
        reajuste = 10;
    } else if (sal>= 1200.01 && sal <= 2000.00) {
        reajuste = 7;
    } else {
        reajuste = 4;
    }


    ganho = sal * reajuste / 100.0;
    novosal = sal + ganho;


    printf("Novo salario: %.2f\n", novosal);
    printf("Reajuste ganho: %.2f\n", ganho);
    printf("Em percentual: %d %%\n", reajuste);

    return 0;
}