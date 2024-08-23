/*Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.
Entrada
A entrada contém valores inteiros.
Saída
A saída deve conter uma das mensagens conforme descrito acima.

6 24
Sao Multiplos

6 25
Nao sao Multiplos*/

#include <stdio.h>
#include <math.h>

int main (){

    int A, B;

    scanf("%d%d", &A, &B);

    for(int i = 0; i < 2; i++){

        bool multiplo = true;
        for (int j = 2; j < B; j++) {

            if (B % j == 0) {
                multiplo = false;
                break;
            }
            
        }

        if (multiplo)
            printf("Sao Multiplos\n");
        else
            printf("Nao sao Multiplos\n");
        
    }

    return 0;
}