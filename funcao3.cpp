#include <stdio.h>

double calcAumento(double salAtual) {

    double aumento;

    if (salAtual <= 2000.00) {
        aumento = 0.20;

    } else {
        aumento = 0.10;
    }

    return salAtual * (1 + aumento);
}

int main() {

    double sal, novoSal;
    
    scanf("%lf", &sal);
    
    novoSal = calcAumento(sal);

    printf("Novo salario: R$ %.2f\n", novoSal);
    
    return 0;
}