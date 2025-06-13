#include <stdio.h>
#include <stdbool.h>

bool eh_triangular(int n);

int main()
{
    int n;
    printf("Entre com um inteiro positivo: ");
    scanf("%d", &n);
    if (eh_triangular(n)) {
        printf("É triangular.\n");
    } else {
        printf("Não é triangular.\n");
    }
    return 0;
}

bool eh_triangular(int n)
{
    int i = 1;
    int soma = 0;
    while (soma < n) {
        soma += i;
        i++;
    }
    return soma == n;
}
