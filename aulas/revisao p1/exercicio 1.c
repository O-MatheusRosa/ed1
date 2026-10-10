#include <stdio.h>

#define MAX 10
// pilha
struct pilha_t{
    int qtd;                 // número de elemenotos na pilha
    char dados[MAX][50];     // array de dados
};
typedef struct pilha_t pilha;

// função a ser desenvolvida:
int conta_nomes(pilha *p){
    int cont = 0;

    for (int i = 0; i < p->qtd; i++){
        if (p->dados[i][0] == 'a') cont++;
    }
    
    return cont;
}
