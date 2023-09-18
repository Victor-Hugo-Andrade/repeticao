#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Digite um numero inteiro positivo.\n");
    } else {
        printf("Numeros naturais de 0 ate %d:\n", N);
        for (int i = 0; i < N; i++) {
            printf("%d\n", i);
        }
    }

    return 0;
}
