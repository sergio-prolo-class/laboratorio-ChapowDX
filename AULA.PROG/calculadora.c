#include <stdio.h>

int main()
{
    float valor, n1, n2;
    char op;

    printf("Entre com a expressão: ");
    scanf("%f %c %f", &n1, &op, &n2);
    switch (op) {
        case '+':
            valor = n1 + n2;
            break;
        case '-':
            valor = n1 - n2;
            break;
        case '*':
            valor = n1 * n2;
            break;
        case '/':
            if (n2 == 0) {
                printf("Erro: Divisão por 0");
                return 1;
            }
            valor = n1 / n2;
            break;
        default:
            printf("Erro: Operação Desconhecida");
            return 1;
    }
    printf("%.2f\n", valor);
    return 0;
}