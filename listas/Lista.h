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
	Elemento *cabeca;
	int tamInfo, qtd;
} Lista;

void inicializa_lista(Lista *p, int t);
int lista_vazia(Lista l);
int insere_inicio(Lista *p, void *info);
int insere_fim(Lista *p, void *info);
int insere_pos(Lista *p, void *info, int pos);
int insere_ordem(Lista *p, void *info, int (*compara)(void *, void *));
int remove_inicio(Lista *p, void *info);
int remove_fim(Lista *p, void *info);
int remove_pos(Lista *p, void *info, int pos);
int le_valor(Lista l, void *info, int pos);
int modifica_valor(Lista l, void *info, int pos);
void mostra_lista(Lista l, void (*mostra)(void *));
int busca(Lista *l, void *info, int (*compara)(void *, void *));
void concatena(Lista *l1, Lista *l2);
Lista busca_todos(Lista l, void *info, int (*compara)(void *, void *));
void mostra_lista_inversa_a(Lista l, void (*mostra)(void *));
void mostra_lista_inversa_b(Lista l, void (*mostra)(void *));
void mostra_lista_inversa_c(Lista l, void (*mostra)(void *));