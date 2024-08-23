#include <stdio.h>
#include <string.h>

int main() {

    char nome[31];

    fgets(nome, sizeof(nome), stdin);

    size_t length = strlen(nome);

    if (length > 0 && nome[length - 1] == '\n') {
        nome[length - 1] = '\0';
    }

    int quantidade_de_letras = strlen(nome);

    printf("%s %d\n", nome, quantidade_de_letras);

    return 0;

}