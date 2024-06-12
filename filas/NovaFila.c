#include <stdio.h>
#include <stdlib.h>
#include "NovaFila.h"

void inicializa_fila(NovaFila *p, int c)
{
    p->dados = malloc(sizeof(int) * c);
    p->fim = -1;
    p->n = 0;
    p->capacidade = c;
}

int fila_vazia(NovaFila f)
{
    return f.n == 0;
}

int fila_cheia(NovaFila f)
{
    return f.n == f.capacidade;
}

int inserir(NovaFila *p, int info)
{
    if (fila_cheia(*p))
        return ERRO_FILA_CHEIA;

    p->dados[++p->fim] = info;
    p->n++;
    return 1; // Sucesso.
}

int remover(NovaFila *p, int *info)
{
    if (fila_vazia(*p))
        return ERRO_FILA_VAZIA;
    *info = p->dados[0];
    for (int i = 0; i < p->n; i++)
        p->dados[i] = p->dados[i + 1];

    --p->fim;
    p->n--;

    return 1; // Sucesso.
}

void mostra_fila(NovaFila f)
{
    if (fila_vazia(f))
        printf("Fila vazia!\n");
    else
    {
        printf("Dados da fila:\n");
        int i, cont;
        i = 0;
        for (cont = 0; cont < f.n; cont++)
        {
            printf("%d\n", f.dados[i]);
            i = (i + 1) % f.capacidade;
        }
    }
}

void desaloca_fila(NovaFila *p)
{
    free(p->dados);
}
