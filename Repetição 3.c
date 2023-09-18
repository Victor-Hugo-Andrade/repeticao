#include <stdio.h>

int main() {
    int N;
    

    printf("Digite um numero inteiro: ");
    scanf("%d", &N);


    for (int i = 1; i <= 2 * N; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
