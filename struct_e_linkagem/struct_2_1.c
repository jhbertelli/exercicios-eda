#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Produto.h"

int main()
{
    int n;
    
    printf("Quantos produtos?\n");
    scanf("%d", &n);

    Produto *vet = malloc(sizeof(Produto) * n);

    for (int i = 0; i < n; i++)
        gera_produto(&vet[i]);

    srand(time(0));
    
    printf("Lista de produtos:\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("Produto %d:\n", i + 1);
        mostra_produto(vet[i]);
    }

    free(vet);
}