/* Você está construindo uma pilha estática para um jogo.
Crie uma função que recebe um ponteiro para a pilha e um caractere 'c'.
A regra da função é a seguinte:

Se a pilha NÃO estiver vazia e o caractere que está no topo for IGUAL ao caractere 'c',
os dois se "cancelam". Ou seja, você deve remover o caractere do topo (fazer um Pop).

Caso contrário (se a pilha estiver vazia OU o topo for diferente de 'c'),
você deve adicionar o caractere 'c' na pilha (fazer um Push).
Lembre-se de verificar se há espaço na pilha (limite 50) antes de adicionar! */

#include <stdio.h>

// elemento usado (não modificar)
struct pilha_t{
    char dados[50];     // array de dados
    int qtd;            // número de elementos na pilha
};
typedef struct pilha_t pilha;

// função a ser desenvolvida (não use printf):
void processa_caractere(pilha *p, char c){
    
   if(p->qtd > 0 && p->dados[p->qtd - 1] == c){

    p->qtd--;

   }else{
    if (p->qtd < 50){
        p->dados[p->qtd] = c;
        p->qtd++;
    }  
   }
}