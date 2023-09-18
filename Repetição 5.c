#include <stdio.h>

int main() {
    int numero = 2; 
    int soma = 0;
    int contador = 0;

    while (contador < 50) {
        soma += numero; 
        numero += 2;    
        contador++;     
    }

    printf("A soma dos 50 primeiros numeros pares e: %d\n", soma);

    return 0;
}
