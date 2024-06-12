#include <stdio.h>
#include "conta.h"

int main(int argc, char* argv[])
{
    Conta conta_1;

    inicializa_conta(&conta_1, 123, 100);

    mostra_conta(conta_1);

    deposito(&conta_1, 400);

    mostra_conta(conta_1);

    float v;

    // printf("Insira o valor a ser sacado:\n");
    // scanf("%f", &v);

    // if (saque(&conta_1, v) == SALDO_INSUFICIENTE)
    //     printf("Saldo insuficiente\n");
    // else
    //     printf("Saque realizado com sucesso\n");

    // mostra_conta(conta_1);

    Conta conta_2;

    inicializa_conta(&conta_2, 321, 400);

    printf("Insira um valor a transferir:\n");
    scanf("%f", &v);

    if (transferencia(&conta_1, &conta_2, v) == SALDO_INSUFICIENTE)
        printf("Saldo insuficiente\n");
    else
        printf("Transferencia realizada com sucesso\n");

    mostra_conta(conta_1);
    mostra_conta(conta_2);

}