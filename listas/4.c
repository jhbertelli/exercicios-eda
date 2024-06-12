#include "FilaEnc.h"
#include <stdio.h>

void mostra_int(void *p)
{
    printf("%d\n", *(int *)p);
}

int main()
{
    FilaEnc f;

    inicializa_lista(&f, sizeof(int));

    mostra_lista(f, mostra_int);

    int x = 5;
    inserir(&f, &x);

    mostra_lista(f, mostra_int);

    x = 8;
    inserir(&f, &x);

    mostra_lista(f, mostra_int);

    x = 2;
    inserir(&f, &x);

    x = 4;
    inserir(&f, &x);

    mostra_lista(f, mostra_int);

    int y;
    remover(&f, &y);

    printf("numero retirado: %d\n", y);

    mostra_lista(f, mostra_int);
}