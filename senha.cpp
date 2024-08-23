#include <stdio.h>
#include <string.h>

void senha(char* palavra) {

    int comprimento = strlen(palavra);
    
    if (comprimento < 6) {
        printf("Senha insegura\n");

        return;
    }
    
    for (int i = 0; i < comprimento; i++) {

        switch (palavra[i]) {
            case 'a':
                printf("@");
                break;
            case 'o':
                printf("0");
                break;
            case 'i':
                printf("1");
                break;
            case 's':
                printf("5");
                break;
            case 'e':
                printf("3");
                break;
            default:
                printf("%c", palavra[i]);
                break;
        }
    }
    
    printf("\n");
}

int main() {

    char palavra[256];

    fgets(palavra, sizeof(palavra), stdin);
    
    palavra[strcspn(palavra, "\n")] = '\0';
    
    senha(palavra);
    
    return 0;
}