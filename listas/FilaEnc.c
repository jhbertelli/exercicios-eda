#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FilaEnc.h"

void inicializa_lista(FilaEnc *p, int t)
{
    p->tamInfo = t;
    p->qtd = 0;
    p->inicio = NULL;
    p->fim = NULL;
}

Elemento *aloca_elemento(void *info, int tam)
{
    Elemento *p = malloc(sizeof(Elemento));
    if (p == NULL)
        return NULL; // Erro, falta de mem�ria!
    p->info = malloc(tam);
    if (p->info == NULL)
    {
        free(p);
        return NULL; // Erro, falta de mem�ria!
    }
    memcpy(p->info, info, tam);
    return p; // Sucesso!
}

int lista_vazia(FilaEnc l)
{
    return l.qtd == 0;
}

int inserir(FilaEnc *f, void *info)
{
    Elemento *novo = aloca_elemento(info, f->tamInfo);

    if (novo == NULL)
        return 0; // falta de memória

    novo->proximo = NULL;

    if (f->inicio == NULL)
        f->inicio = novo;
    else
        f->fim->proximo = novo;

    f->fim = novo;
    f->qtd++;

    return 1;
}

int remover(FilaEnc *f, void *info)
{
    memcpy(info, f->inicio->info, f->tamInfo);
    f->inicio = f->inicio->proximo;
    f->qtd--;

    return 1;
}

void mostra_lista(FilaEnc l, void (*mostra)(void *))
{
    if (lista_vazia(l))
        printf("Lista vazia!\n");
    else
    {
        printf("Dados da lista:\n");
        Elemento *p = l.inicio;
        while (p != NULL)
        {
            mostra(p->info); // Invoca��o por callback
            p = p->proximo;
        }
    }

    printf("---------------\n");
}