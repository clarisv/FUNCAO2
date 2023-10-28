#include <stdio.h>

int escolherOpcao();
void aVista(float totalCompra);
void parcelaDuas(float totalCompra);
void parcelarMaisDeTres(float totalCompra);

int main() {
    int opcaoEscolhida;
    float totalCompra;

    printf("Informe o valor total da compra: ");
    scanf("%f", &totalCompra);

    opcaoEscolhida = escolherOpcao();

    switch (opcaoEscolhida) {
        case 1:
            aVista(totalCompra);
            break;
        case 2:
            parcelaDuas(totalCompra);
            break;
        case 3:
            parcelarMaisDeTres(totalCompra);
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;
}

int escolherOpcao() {
    int opcao;
    do {
        printf("1 - À vista\n");
        printf("2 - Parcelado em duas vezes\n");
        printf("3 - Parcelado de três a dez vezes para compras acima de 100,00\n");
        printf("Digite a opção escolhida: ");
        scanf("%d", &opcao);
        if (opcao < 1 || opcao > 3) {
            printf("Opção inválida\n");
        }
    } while (opcao < 1 || opcao > 3);
    return opcao;
}

void aVista(float totalCompra) {
    float desconto = totalCompra * 0.10;
    float valorFinal = totalCompra - desconto;

    printf("\nValor do desconto R$%.2f", desconto);
    printf("\nValor Final R$%.2f", valorFinal);
}

void parcelaDuas(float totalCompra) {
    float totalParcela = totalCompra / 2;

    printf("\nValor da Compra R$%.2f", totalCompra);
    printf("\nValor da Parcela R$%.2f", totalParcela);
}

void parcelarMaisDeTres(float totalCompra) {
    if (totalCompra < 100.0) {
        printf("Não é possível parcelar em mais de três vezes para compras abaixo de 100,00\n");
        return;
    }

    int qtdParcelas;
    float juros, valorFinal, parcela;

    do {
        printf("Digite a quantidade de parcelas (3 a 10): ");
        scanf("%d", &qtdParcelas);
        if (qtdParcelas < 3 || qtdParcelas > 10) {
            printf("Quantidade de parcelas inválida\n");
        }
    } while (qtdParcelas < 3 || qtdParcelas > 10);

    juros = totalCompra * 0.03;
    valorFinal = totalCompra + juros;
    parcela = valorFinal / qtdParcelas;

    printf("\nValor Final com juros R$%.2f", valorFinal);
    printf("\nValor total dos juros R$%.2f", juros);
    printf("\nValor da Parcela R$%.2f",parcela);
}


