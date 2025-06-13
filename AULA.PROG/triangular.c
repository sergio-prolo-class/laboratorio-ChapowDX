#include <stdio.h>
#include <stdbool.h>

bool eh_triangular(int n);

int main()
{
    int n;
    printf("Leia um inteiro positivo: ");
    scanf("%d", &n);
    if (eh_triangular(n)) {
        printf("É Triangular!\n");
    } else {
        printf("Não é triangular!");
    }
}