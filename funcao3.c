#include <stdio.h>

void realizarTrocas(int A[10][10]) {
    
    for (int i = 0; i < 10; i++) {
        int temp = A[1][i];
        A[1][i] = A[7][i];
        A[7][i] = temp;
    }

    
    for (int i = 0; i < 10; i++) {
        int temp = A[i][3];
        A[i][3] = A[i][9];
        A[i][9] = temp;
    }

    
    for (int i = 0; i < 10; i++) {
        int temp = A[i][i];
        A[i][i] = A[i][9 - i];
        A[i][9 - i] = temp;
    }

    
    for (int i = 0; i < 10; i++) {
        int temp = A[4][i];
        A[4][i] = A[i][9];
        A[i][9] = temp;
    }
}

int main(){

    int A[10][10];

    realizarTrocas(A);

    printf("Matriz alterada:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}

