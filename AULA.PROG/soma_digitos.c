#include <stdio.h>

int main()
{
    int n, soma = 0, digito;
    printf("Entre com um inteiro não-negativo: ");
    scanf("%d", &n);
    while (n > 0) {
        digito = n % 10;
        soma += digito;
        n /= 10;
    }
    printf("Soma dos dígitos: %d\n", soma);
    return 0;
}