#include "NovaFila.h"
#include <stdio.h>

int main()
{
    NovaFila f;

    inicializa_fila(&f, 5);

    inserir(&f, 7);
    inserir(&f, 5);
    inserir(&f, 3);

    mostra_fila(f);

    inserir(&f, 8);

    mostra_fila(f);

    int temp;

    remover(&f, &temp);

    mostra_fila(f);

    remover(&f, &temp);

    mostra_fila(f);
}