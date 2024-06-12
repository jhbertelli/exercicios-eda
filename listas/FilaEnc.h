// Constante de erro
#define ERRO_LISTA_VAZIA -1
#define ERRO_POS_INVALIDA -2

// Elemento de lista
typedef struct ele
{
    void *info;
    struct ele *proximo;
} Elemento;

// Cabe�alho de lista
typedef struct
{
    Elemento *inicio, *fim;
    int tamInfo, qtd;
} FilaEnc;

void inicializa_lista(FilaEnc *p, int t);
int lista_vazia(FilaEnc l);
void mostra_lista(FilaEnc l, void (*mostra)(void *));

int inserir(FilaEnc *f, void *info);
int remover(FilaEnc *f, void *info);