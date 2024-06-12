#define MAX_PILHA 50
#define ERR_PILHA_VAZIA -1
#define ERR_PILHA_CHEIA -2

typedef struct
{
    int dados[MAX_PILHA];
    int topo;
} Pilha;

void inicializa_pilha(Pilha *p);
int pilha_vazia(Pilha pilha);
int pilha_cheia(Pilha pilha);
int push(Pilha *p, int val);
int pop(Pilha *p, int *val);
int le_topo(Pilha pilha, int *val);
void mostra_pilha(Pilha pilha);