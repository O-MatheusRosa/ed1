/* Você está construindo uma pilha estática que guarda caracteres.
Crie uma função que recebe um ponteiro para a pilha e DOIS caracteres (c1 e c2).
A função deve adicionar os dois caracteres na pilha (primeiro entra o c1, e logo em cima dele entra o c2).

Regra: Você SÓ PODE adicionar os caracteres se houver espaço para os dois.
Se só houver espaço para mais um, ou se a pilha já estiver totalmente cheia,
a função não deve adicionar nenhum deles e deve apenas retornar. */

#include <stdio.h>

// elemento usado (não modificar)
struct pilha_t{
    char dados[50];     // array de dados
    int qtd;            // número de elementos na pilha
};
typedef struct pilha_t pilha;

// função a ser desenvolvida (não use printf):
void adiciona_dois(pilha *p, char c1, char c2){
    if (p->qtd <= 48){

        p->dados[p->qtd] = c1;
        p->qtd++;

        p->dados[p->qtd] = c2;
        p->qtd++;
    }
}