#include "Pilha.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    Pilha pilha;

    scanf("%d", &n);

    inicializa_pilha(&pilha, 32); // 32 - máximo de bits em um int

    while (n > 0)
    {
        empilha(&pilha, n % 2);
        n = n / 2;
    }

    while (!pilha_vazia(pilha))
    {
        int num;

        desempilha(&pilha, &num);
        printf("%d", num);
    }

    desaloca_pilha(&pilha);
}