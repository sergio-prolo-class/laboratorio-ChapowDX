#include <stdio.h>

int main()
{
    float fixo, vendas, comissao, mensal;
    int avaliacao;
    fixo = 2000.00;
    printf("Entre com o total de vendas (R$): ");
    scanf("%f", &vendas);
    if (vendas >= 10000.00) {
        comissao = vendas / 100 * 7;
    } else {
        comissao = vendas / 100 * 5;
    }
    mensal = fixo + comissao;
    printf("Entre com a avaliação do desempenho (1-10): ");
    scanf("%d", &avaliacao);
    if (avaliacao >= 8) {
        mensal = mensal + 500.00;
    }

    printf("Remuneração: %.2f\n", mensal);
    return 0;
}