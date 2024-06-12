#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main()
{
    Matriz m;

    // inicializa_matriz(&m, 5, 5);

    carrega_arquivo("arquivo.txt", &m);

    // mostra_matriz(m);

    // gera_valores(&m, 1000);

    // set_valor(&m, 1, 1, 255);
    // set_valor(&m, 5, 6, 255);
    // set_valor(&m, 2, 3, 23497);

    // mostra_matriz(m);

    desaloca_matriz(&m);
}