#include <stdio.h>
#include <string.h>

void trocar(char *a, char *b) {

    char temp[31];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

int main() {

    char nome1[31], nome2[31], nome3[31];

    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    fgets(nome3, sizeof(nome3), stdin);
    nome3[strcspn(nome3, "\n")] = '\0';

    if (strcmp(nome1, nome2) > 0) {
        trocar(nome1, nome2);
    }
    if (strcmp(nome1, nome3) > 0) {
        trocar(nome1, nome3);
    }
    if (strcmp(nome2, nome3) > 0) {
        trocar(nome2, nome3);
    }

    printf("%s\n", nome1);
    printf("%s\n", nome2);
    printf("%s\n", nome3);

    return 0;

}