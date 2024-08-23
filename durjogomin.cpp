/*Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.
Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.
Entrada
Quatro números inteiros representando a hora de início e fim do jogo.
Saída
Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .*/

#include <stdio.h>

int main() {

    int horaI, minI;
    int horaF, minF;
    int duracaoH, duracaoM;

    scanf("%d", &horaI);
    scanf("%d", &minI);
    scanf("%d", &horaF);
    scanf("%d", &minF);

    int minI = horaI * 60 + minI;
    int minF = horaF * 60 + minF;
    int duracaotot;

    if (minF <= minI) {

        duracaotot = (24 * 60) - minI + minF;
    } else {

        duracaotot = minF - minI;
    }

    duracaoH = duracaotot / 60;
    duracaoM = duracaotot % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoH, duracaoM);

    return 0;
    }