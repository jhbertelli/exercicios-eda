#include "Lista.h"
#include <stdio.h>

void mostra_int(void *p)
{
    printf("%d\n", *(int *)p);
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

    mostra_lista_inversa_a(l, mostra_int);

    mostra_lista_inversa_b(l, mostra_int);

    mostra_lista_inversa_c(l, mostra_int);
}