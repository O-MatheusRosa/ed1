#include <stdio.h>
#include <stdlib.h>

// Nó do cliente
typedef struct no {
    char nome;
    struct no *prox;
} no;

// Controlador da Fila
typedef struct fila {
    no *inicio;
    no *fim;
} fila;

int main() {
    // 1. O banco abre a fila (vazia no começo)
    fila f;
    f.inicio = NULL;
    f.fim = NULL;

    // 2. Criamos a Ana (A) e o Beto (B) na memória
    no *clienteA = (no*) malloc(sizeof(no));
    clienteA->nome = 'A';
    
    no *clienteB = (no*) malloc(sizeof(no));
    clienteB->nome = 'B';

    // ==========================================
    // COLOQUE SEU CÓDIGO AQUI (4 linhas de cabo)
    // ==========================================
    
    // 1. Ana aponta para Beto
    clienteA->prox = clienteB;
    
    
    // 2. O próximo de Beto é nulo (ele é o último)
    clienteB->prox = NULL;
    
    // 3. O início da fila 'f' aponta para a Ana
    f.inicio = clienteA;
    
    // 4. O fim da fila 'f' aponta para o Beto
    f.fim = clienteB;

    // ==========================================
    
    // Teste para ver se você ligou os fios certos:
    printf("Inicio da fila: %c\n", f.inicio->nome);
    printf("Segundo da fila: %c\n", f.inicio->prox->nome);
    printf("Fim da fila: %c\n", f.fim->nome);

    return 0;
}