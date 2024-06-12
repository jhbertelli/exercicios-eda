#include "Fila.h"
#include "Pilha.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    Fila f;
    Pilha p;

    int quant_val = 6;

    inicializa_fila(&f, quant_val);
    inicializa_pilha(&p, quant_val);

    for (int i = 0; i < f.capacidade; i++)
        inserir(&f, rand() % 10);

    printf("Antes de reverter:\n");
    mostra_fila(f);

    int temp;

    while (!fila_vazia(f))
    {
        remover(&f, &temp);
        empilha(&p, temp);
    }

    while (!pilha_vazia(p))
    {
        desempilha(&p, &temp);
        inserir(&f, temp);
    }

    printf("Depois de reverter:\n");
    mostra_fila(f);

    desaloca_fila(&f);
    desaloca_pilha(&p);
}