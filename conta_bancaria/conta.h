#define SALDO_INSUFICIENTE -1

typedef struct
{
    int numero;
    float saldo;
} Conta;

void inicializa_conta(Conta *p, int n, float s);
void mostra_conta(Conta x);
void deposito(Conta *p, float valor);
int saque(Conta *p, float valor);
int transferencia(Conta *origem, Conta *destino, float valor);