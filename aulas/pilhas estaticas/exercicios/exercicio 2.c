/* Você está construindo uma pilha estática que guarda caracteres.
Crie uma função que recebe como entrada um ponteiro para a pilha,
remova o caractere do topo da pilha e retorne esse caractere.
Caso a pilha esteja vazia (sem elementos), a função deve retornar o caractere nulo '\0'. */

#include <stdio.h>

// elemento usado (não modificar)
struct pilha_t{
    char dados[50];     // array de dados
    int qtd;            // número de elementos na pilha
};
typedef struct pilha_t pilha;

// função a ser desenvolvida (não use printf):
char remove_caractere(pilha *p){
    if (p->qtd >= 0){
        p->qtd--;

        return p->dados[p->qtd];
    }else{
        return '\0';
    }    
}