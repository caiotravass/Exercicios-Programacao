#include <stdio.h>

int main() {

    int A[2][3], B[2][3], C[2][3];
    
    for(int i = 0; i < 2; ++i) {

        for(int j = 0; j < 3; ++j) {

            scanf("%d", &A[i][j]);
        }
    }
    
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 3; ++j) {

            scanf("%d", &B[i][j]);
        }
    }
    
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 3; ++j) {

            C[i][j] = A[i][j] + B[i][j];
        }
    }
    
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 3; ++j) {
            if (j < 2) {
                printf("%d ", C[i][j]);
            } else {
                printf("%d", C[i][j]);
            }
        }

        printf("\n");
    }

    return 0;

}