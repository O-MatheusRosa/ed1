#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *prox;
    struct no *ant;
} no;

void insere_inicio(no **inicio, int valor) {
    no *novo = (no*) malloc(sizeof(no));
    novo->valor = valor;

    // 1. O 'prox' do 'novo' aponta para o inicio atual (*inicio)
    
    
    // 2. O 'ant' do 'novo' vira NULL (pois ele é o novo primeiro)
    
    
    // 3. Se a lista NAO estava vazia (*inicio != NULL), 
    // faça o 'ant' do antigo inicio apontar para o 'novo'
    
    
    // 4. Atualize o inicio oficial (*inicio) para apontar para o 'novo'
    
    
}

int main() {
    no *inicio = NULL; // Lista vazia

    insere_inicio(&inicio, 20); // Lista: [20]
    insere_inicio(&inicio, 10); // Lista: [10] <-> [20]

    // Testando as ligações pra frente e pra trás
    printf("Primeiro: %d\n", inicio->valor);                 // Imprime 10
    printf("Segundo: %d\n", inicio->prox->valor);            // Imprime 20
    printf("Volta pro primeiro: %d\n", inicio->prox->ant->valor); // Imprime 10

    return 0;
}   