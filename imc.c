#include <stdio.h>

int main()
{
    float peso, altura, imc;
    printf("Entre com o peso (kg): ");
    scanf("%f", &peso);
    printf("Entre com a altura(m): ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    printf("IMC: %.2f", imc);

    if (imc < 18.5) {
        printf("Classificação: Magreza \n");
    }
    if (imc >= 18.5 && imc <= 24.9) {
        printf("Classificação: Normal \n");
    }
    if (imc >= 25.0 && imc <= 29.9) {
        printf("Classificação: Sobrepeso \n");
    }
    if (imc >= 30.0 && imc <= 39.9) {
        printf("Classificação: Obesidade \n");
    }
    if (imc >= 40) {
        printf("Classificação: Obesidade Grave \n");
    }
}