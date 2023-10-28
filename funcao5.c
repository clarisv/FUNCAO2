#include <stdio.h>

void converterIdade(int idadeEmAnos, int *anos, int *meses, int *dias) {
    *anos = idadeEmAnos;
    *meses = *anos * 12;
    *dias = *anos * 365;
}

int main() {

    int idadeEmAnos;
    int anos, meses, dias;

    printf("quantos anos o usuario tem? ");
    scanf("%d", &idadeEmAnos);

    converterIdade(idadeEmAnos, &anos, &meses, &dias);

    printf("a idade da pessoa é: %d anos, %d meses e %d dias.\n", anos, meses, dias);

    return 0;
}
