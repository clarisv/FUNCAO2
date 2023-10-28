#include <stdio.h>

void calLocacoesGratis(int filmesRetirados[], int locacoesGratis[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        locacoesGratis[i] = filmesRetirados[i] / 15;
    }
}

int main(){
    int filmesRetirados[100];
    int locacoesGratis[100];
    
    calLocacoesGratis(filmesRetirados, locacoesGratis, 100);

 return 0;

 printf("Quantidade de locacoes gratuitas para cada cliente:\n");
    for (int i = 0; i < 100; i++) {
    printf("Cliente %d: %d locacoes gratuitas\n", i + 1, locacoesGratis[i]);
    }
 
 return 0;

}

