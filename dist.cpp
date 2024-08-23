/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, 
mostrando 4 casas decimais, segundo a fórmula da distancia.
Entrada
O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.
Saída
Calcule e imprima o valor da distância segundo a fórmula fornecida, considerando 4 casas decimais.*/

#include <stdio.h>
#include <math.h>

int main (){

    double a,b,c,d,dist;

    scanf("%lf%lf", &a, &b);
    scanf("%lf%lf", &c, &d);

    dist = sqrt((c-a)*(c-a)+(d-b)*(d-b));

    printf ("%.4lf\n", dist);

    return 0;
}