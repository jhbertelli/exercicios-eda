#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

void mostra_int(void *p)
{
    printf("%d\n", *(int *)p);
}

int main()
{
    Lista l1, l2;

    inicializa_lista(&l1, sizeof(int));
    inicializa_lista(&l2, sizeof(int));

    int x = 5;

    insere_fim(&l1, &x);

    x = 6;
    insere_fim(&l1, &x);

    x = 9;
    insere_fim(&l1, &x);

    // mostra lista 1
    mostra_lista(l1, mostra_int);

    x = 2;
    insere_fim(&l2, &x);

    x = 10;
    insere_fim(&l2, &x);

    // mostra lista 2
    mostra_lista(l2, mostra_int);

    concatena(&l1, &l2);

    printf("-------------------------\n");
    mostra_lista(l1, mostra_int);
    mostra_lista(l2, mostra_int);
}