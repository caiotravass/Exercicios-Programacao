#include <stdio.h>
#include <iostream>

using namespace std;


void insertionSort(int *pontos, int tam) {

    for (int i = 0; i < tam; i++) {
        for (int j = (i+1); j < tam;j++) {
            if (pontos[i] >= pontos[j]) {
                int aux = pontos[i];
                pontos[i] = pontos[j];
                pontos[j] = aux;
            }
        }
    }

}

int main() {

    int N, K; cin >> N >> K;

    int pontos[N];


    for (int i = 0; i < N;i++) {
        cin >> pontos[i];
    }

    insertionSort(pontos, N);

    int soma = 0;
    int repetido = -1;
    for (int i = (N-1); i >= 0; i--) {
        
        if (K > 0) {
            soma++;
            K--;
            repetido = pontos[i];
        } else {
            if (pontos[i] == repetido) {
                soma++;
            } else {
                break;
            }
        }
    }


    cout << soma << endl;





    return 0;

}