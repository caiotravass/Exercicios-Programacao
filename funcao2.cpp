#include <stdio.h>

int printMatriz(int n){
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("*");
        }
        printf("\n");
    }

}

int main(){

    int num;
    
    scanf("%d", &num);
    printMatriz(num);

    return 0;
}