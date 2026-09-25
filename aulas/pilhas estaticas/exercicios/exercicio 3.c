/* Você está construindo uma pilha estática que guarda caracteres.
Crie uma função que recebe um ponteiro para a pilha e um caractere.
A função deve adicionar o caractere na pilha APENAS SE:

Houver espaço na pilha (o limite é 50).

O caractere NÃO for um espaço em branco (o espaço em branco em C é representado por ' ').

Se a pilha estiver cheia ou o caractere for um espaço, a função simplesmente não deve fazer nada e retornar. */

#include <stdio.h>

// elemento usado (não modificar)
struct pilha_t{
    char dados[50];     // array de dados
    int qtd;            // número de elementos na pilha
};
typedef struct pilha_t pilha;

// função a ser desenvolvida (não use printf):
void adiciona_sem_espaco(pilha *p, char c){
    
    if (p->qtd < 50 && c != ' '){
        p->dados[p->qtd] = c;
        p->qtd++;
    }
}