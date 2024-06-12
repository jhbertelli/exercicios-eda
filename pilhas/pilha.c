#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

void inicializa_pilha(Pilha *p)
{
    p->topo = -1;
}

int pilha_vazia(Pilha pilha)
{
    return pilha.topo == -1;
}

int pilha_cheia(Pilha pilha)
{
    return pilha.topo == MAX_PILHA - 1;
}

int push(Pilha *p, int val)
{
    if (pilha_cheia(*p))
        return ERR_PILHA_CHEIA;

    p->topo++;
    p->dados[p->topo] = val;

    return 1; // sucesso
}

int pop(Pilha *p, int *val)
{
    if (pilha_vazia(*p))
        return ERR_PILHA_VAZIA;
    
    *val = p->dados[p->topo];
    p->topo--;
    return 1; // sucesso
}

int le_topo(Pilha pilha, int *val)
{
    if (pilha_vazia(pilha))
        return ERR_PILHA_VAZIA;
    
    *val = pilha.dados[pilha.topo];

    return 1;
}

void mostra_pilha(Pilha pilha)
{
    if (pilha_vazia(pilha))
        printf("Pilha vazia!\n");
    else
    {
        printf("Dados da pilha:\n");
        
        for (int i = 0; i < pilha.topo; i++)
            printf("%d\n", pilha.dados[i]);
    }
}