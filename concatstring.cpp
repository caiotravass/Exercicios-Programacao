#include <stdio.h>
#include <string.h>

int maxChar = 100;

int main() {

    char nome[maxChar];
    char sobrenome[maxChar];
    char resultado[maxChar * 2]; 

    if (fgets(nome, sizeof(nome), stdin) != NULL) {

        nome[strcspn(nome, "\n")] = '\0';
    }

    if (fgets(sobrenome, sizeof(sobrenome), stdin) != NULL) {

        sobrenome[strcspn(sobrenome, "\n")] = '\0';
    }

    snprintf(resultado, sizeof(resultado), "%s%s", nome, sobrenome);

    printf("%s\n", resultado);

    return 0;
}