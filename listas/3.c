#include <stdio.h>
#include "Lista.h"

void mostra_int(void *p)
{
    printf("%d", *(int *)p);
}

int compara(void *p1, void *p2)
{
    return *(int *)p1 == *(int *)p2;
}

int main()
{
    Lista l;

    inicializa_lista(&l, sizeof(int));

    int x = 7;
    insere_fim(&l, &x);

    x = 2;
    insere_fim(&l, &x);

    x = 5;
    insere_fim(&l, &x);

    x = 9;
    insere_fim(&l, &x);

    x = 3;
    insere_fim(&l, &x);

    x = 9;
    insere_fim(&l, &x);

    x = 15;
    insere_fim(&l, &x);

    mostra_lista(l, mostra_int);
    printf("\n");

    int y = 9;

    Lista encontrados = busca_todos(l, &y, compara);

    mostra_lista(encontrados, mostra_int);
}