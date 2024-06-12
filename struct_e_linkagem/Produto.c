#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Produto.h"

void mostra_produto(Produto x)
{
    printf("(%d, %s, %.2f)\n", x.codigo, x.descricao, x.preco);
}

void le_produto(Produto *x)
{
    printf("Codigo:\n");
    scanf("%d", &x->codigo);
    printf("Descricao:\n");
    scanf(" %[^\n]", x->descricao);
    printf("Preco:\n");
    scanf("%f", &x->preco);
}

void gera_produto(Produto *p)
{
    char *nomes[] =
    {
        "Caderno grande", "Caderno pequeno",
        "Caneta azul", "Caneta preta",
        "CD Smashing Pumpkins", "Grampeador",
        "What Remains of Edith Finch", "Resident Evil 4",
        "CD The Cranberries", "Eminem",
        "From Under the Cork Tree", "Muse - Absolution",
        "Giz de cera", "CD The Beatles"
    };

    int n = sizeof(nomes) / sizeof(char*);
    
    p->codigo = rand() % 100 + 1;
    p->preco = (rand() % 10000 + 1) / 100.0;
    strcpy(p->descricao, nomes[rand() % n]);
}
