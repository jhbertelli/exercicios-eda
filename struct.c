#include <stdio.h>

typedef struct {
    int codigo;
    char descricao[20];
    float preco;
} Produto;

void le_produto(Produto *x);
void mostra_produto(Produto x);

int main()
{
    Produto x = { 123, "eeee", 123 };
    
    mostra_produto(x);

    le_produto(&x);

    mostra_produto(x);
}

void mostra_produto(Produto x)
{
    printf("%d\n", x.codigo);
    printf("%s\n", x.descricao);
    printf("%.2f\n", x.preco);
}

void le_produto(Produto *x)
{
    scanf("%d", &x->codigo);
    scanf(" %[^\n]", x->descricao);
    scanf("%f", &x->preco);
}