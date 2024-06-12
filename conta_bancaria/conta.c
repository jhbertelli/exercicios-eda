#include <stdio.h>
#include "conta.h"

void inicializa_conta(Conta *p, int n, float s)
{
    p->numero = n;
    p->saldo = s;
}

void mostra_conta(Conta x)
{
    printf("(Conta: %d | Saldo: R$%.2f)\n", x.numero, x.saldo);
}

void deposito(Conta *p, float valor)
{
    p->saldo += valor;
}

int saque(Conta *p, float valor)
{
    if (valor > p->saldo)
        return SALDO_INSUFICIENTE;
    
    p->saldo -= valor;

    return 1;
}

int transferencia(Conta *origem, Conta *destino, float valor)
{
    if (saque(origem, valor) == SALDO_INSUFICIENTE)
        return SALDO_INSUFICIENTE;

    deposito(destino, valor);

    return 1;
}