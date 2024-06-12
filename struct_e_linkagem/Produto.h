typedef struct {
    int codigo;
    char descricao[20];
    float preco;
} Produto;

void le_produto(Produto *x);
void mostra_produto(Produto x);
void gera_produto(Produto *p);
