#include <stdio.h>

int main(){

    int numeros[10];
    int soma = 0;
    double media;
    
    for (int i = 0; i < 10; ++i){

        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }
    
    media = soma / 10.0;
    
    printf ("MEDIA: %.2f\n", media);
    
    int contagem = 0;

    for (int i = 0; i < 10; ++i){

        if (numeros[i] > media) {
            contagem++;
        }
    }
    
    printf ("%d\n", contagem);
    
    for (int i = 0; i < 10; ++i){

        if (numeros[i] > media) {
            printf("%d\n", numeros[i]);
        }
    }
    
    return 0;

}