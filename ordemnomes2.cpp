#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numAlunos = 40;
int maxChar = 100;

int compararNomes(const void *a, const void *b){

    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {

    char nomes[numAlunos][maxChar];
    char *ponteiros[numAlunos];

    int i;

    for (i = 0; i < numAlunos; i++){

        fgets(nomes[i], maxChar, stdin);
 
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
        ponteiros[i] = nomes[i];
    }

    qsort(ponteiros, numAlunos, sizeof(char *), compararNomes);

    printf("ORDENADOS:\n");

    for (i = 0; i < numAlunos; i++){

        printf("%s\n", ponteiros[i]);
    }

    return 0;
    
}