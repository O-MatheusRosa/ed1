/*Você está construindo uma pilha estática 
que guarda caracteres como na struct abaixo.  
Crie uma função que recebe como entrada um 
ponteiro para a pilha e um caractere e adicione o caractere à pilha. */

#include <stdio.h>

// elemento usado (não modificar)
struct pilha_t{
    char dados[50];     // array de dados
    int qtd;            // número de elemenotos na pilha
};
typedef struct pilha_t pilha;

// função a ser desenvolvida (não use printf):
void adiciona_caractere(pilha *p, char c){
   if (p->qtd <= 50){
    p->dados[p->qtd] = c;

    p->qtd++;
   }
    return;
}
