#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tentativas = 0, palpite, segredo;
    srand(time(NULL));
    segredo = 1 + rand() % 100;

        do {
        printf("Dê um palpite: \n");
        scanf("%d", &palpite);
        tentativas = tentativas + 1;
        if (segredo < palpite) {
            printf("O segredo é menor que seu palpite!\n");
        } else if (segredo > palpite) {
            printf("O segredo é maior que seu palpite!\n");
        }
    } while (palpite != segredo);

    printf("Parabéns! Você acertou o número em %d tentativas", tentativas);
    return 0;
}