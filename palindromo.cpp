#include <stdio.h>
#include <cstring>
#include <cctype>

int maxChar = 100;

int palindromo(const char *palavra) {
    
    int tamanho = strlen(palavra);
    int comeco = 0;
    int final = tamanho - 1;

    while (comeco < final) {

        while (comeco < final && !isalpha(palavra[comeco])) comeco++;
        while (comeco < final && !isalpha(palavra[final])) final--;

        if (tolower(palavra[comeco]) != tolower(palavra[final])) {
            return 0;
        }
        comeco++;
        final--;
    }
    return 1;
}

int main() {

    char palavra[maxChar + 1];

    scanf("%100s", palavra);

    if (palindromo(palavra)) {
        printf("S\n");

    } else {
        printf("N\n");
    }

    return 0;

}