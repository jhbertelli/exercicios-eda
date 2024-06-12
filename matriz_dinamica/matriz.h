#define ERRO_CORD_INVALIDA -1

typedef struct
{
    int **dados;
    int lin, col;
} Matriz;

void inicializa_matriz(Matriz *p, int lin, int col);
void mostra_matriz(Matriz m);
int set_valor(Matriz *p, int lin, int col, int valor);
void gera_valores(Matriz *p, int limite);
void desaloca_matriz(Matriz *p);
int carrega_arquivo(char *nome_arq, Matriz *p);