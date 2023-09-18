#include <stdio.h>

int main() {
    int escolha;
    double total = 0.0;

    printf("Bem-vindo a loja de frutas!\n");

    do {
        printf("\nMenu de frutas:\n");
        printf("1 => Abacaxi  5,00 a unidade\n");
        printf("2 => Maça  1,00 a unidade\n");
        printf("3 => Pera  4,00 a unidade\n");
        printf("4 => Encerrar compra\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        double preco = 0.0;
        int quantidade = 0;

        switch (escolha) {
            case 1:
                printf("Quantos abacaxis voce deseja comprar? ");
                scanf("%d", &quantidade);
                preco = 5.00 * quantidade;
                break;
            case 2:
                printf("Quantas macas voce deseja comprar? ");
                scanf("%d", &quantidade);
                preco = 1.00 * quantidade;
                break;
            case 3:
                printf("Quantas peras voce deseja comprar? ");
                scanf("%d", &quantidade);
                preco = 4.00 * quantidade;
                break;
            case 4:
                break;
            default:
                printf("Opção invalida! Tente novamente.\n");
        }

        total += preco;

    } while (escolha != 4);

    printf("O valor total da compra é: R$ %.2f\n", total);

    return 0;
}
