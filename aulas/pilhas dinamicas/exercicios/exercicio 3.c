#include <stdio.h>

// Estrutura fornecida pelo professor (não modificar)
typedef struct No {
    int id;
    struct No *prox;
} No;

// Função a ser desenvolvida:
// Recebe três ponteiros para nós isolados e deve encadeá-los.
void encadear_lista(No *primeiro, No *segundo, No *terceiro) {

    primeiro->prox = segundo;
    segundo->prox = terceiro;
    terceiro->prox = NULL;
    
    // 1. Faça o 'prox' do primeiro apontar para o segundo
    // 2. Faça o 'prox' do segundo apontar para o terceiro
    // 3. Faça o 'prox' do terceiro apontar para NULL (indicando o fim)
    
    // SEU CÓDIGO AQUI:
    
    
}