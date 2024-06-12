#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

void inicializa_matriz(Matriz *p, int lin, int col)
{
    p->col = col;
    p->lin = lin;
    p->dados = malloc(sizeof(int*) * lin);

    int i;

    for (int i = 0; i < lin; i++)
    {
        p->dados[i] = calloc(col, sizeof(int));
        
        // OU (mesma coisa):
        // p->dados[i] = malloc(sizeof(int) * col);
        // for (int j = 0; j < col; j++)
        //     p->dados[i][j] = 0;
    }
}

void mostra_matriz(Matriz m)
{
    printf("Dados da matriz %d x %d:\n", m.lin, m.col);

    for (int i = 0; i < m.lin; i++)
    {
        for (int j = 0; j < m.col; j++)
            printf("%d\t", m.dados[i][j]);

        printf("\n");
    }

    printf("-----------------------------------------\n");
}

int set_valor(Matriz *p, int lin, int col, int valor)
{
    if (
        lin >= p->lin ||
        col >= p->col ||
        col < 0 ||
        lin < 0
    )
        return ERRO_CORD_INVALIDA;

    p->dados[lin][col] = valor;
    return 1; // sucesso
}

void gera_valores(Matriz *p, int limite)
{
    for (int i = 0; i < p->lin; i++)
        for (int j = 0; j < p->col; j++)
            set_valor(p, i, j, rand() % limite + 1);
}

void desaloca_matriz(Matriz *p)
{
    for (int i = 0; i < p->lin; i++)
        free(p->dados[i]);
    
    free(p->dados);
}

int carrega_arquivo(char *nome_arq, Matriz *p)
{
    FILE *f = fopen(nome_arq, "rt");

    if (f == NULL)
        return 0; // erro (função booleana)
    
    int lin, col, x;

    fscanf(f, "%d %d", &lin, &col);

    inicializa_matriz(p, lin, col);

    for (int i = 0; i < p->lin; i++)
        for (int j = 0; j < p->col; j++)
        {
            fscanf(f, "%d", &x);
            set_valor(p, i, j, x);
        }
    
    return 1; // sucesso
}