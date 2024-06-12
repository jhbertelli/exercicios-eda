#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

void mostra_int(void *p)
{
    printf("%d\n", *(int *)p);
}

int compara(void *p1, void *p2)
{
    return *(int *)p1 == *(int *)p2;
}

int main()
{
    Lista l;

    inicializa_lista(&l, sizeof(int));

    int x = 5;

    insere_fim(&l, &x);

    x = 6;
    insere_fim(&l, &x);

    x = 9;
    insere_fim(&l, &x);

    mostra_lista(l, mostra_int);

    int y = 8;

    printf("posicao encontrada para o valor %d: %d\n", y, busca(&l, &y, compara));
}