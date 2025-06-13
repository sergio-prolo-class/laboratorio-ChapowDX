#include <stdio.h>

char decompor(float x, int *p_int, float *p_frac)
{
    char sinal;
    if (x > 0) {
        sinal = '+';
    } else if (x < 0) {
        sinal = '-';
    } else {
        sinal = " "
    }
    p_int = (int)x;
    p_frac = (float)x;
    return sinal;
}
}

int main()
{
    float x, *p_frac;
    int *p_int;
    char sinal;
    printf("Leia um número real: ");
    scanf("%f", &x);
    char sinal = decompor(x, p_int, *p_frac);
    printf("Sinal: %c\n", sinal);
    printf("Parte inteira: %d \n ", *p_int);
    printf("Parte fracionada: %.2f \n", *p_frac);

    return 0;
}
