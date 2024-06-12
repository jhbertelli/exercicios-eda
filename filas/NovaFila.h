#define ERRO_FILA_VAZIA -1
#define ERRO_FILA_CHEIA -2

typedef struct
{
    int *dados;
    int fim;
    int n;
    int capacidade;
} NovaFila;

void inicializa_fila(NovaFila *p, int c);
int fila_vazia(NovaFila f);
int fila_cheia(NovaFila f);
int inserir(NovaFila *p, int info);
int remover(NovaFila *p, int *info);
void mostra_fila(NovaFila f);
void desaloca_fila(NovaFila *p);
