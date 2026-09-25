#include <stdlib.h>

typedef struct No {
    int dado;
    struct No *prox;
} No;

typedef struct {
    No *ini;
    No *fim;
} FilaDinamica;

// Função para desenvolver:
int inserir_fila(FilaDinamica *f, int valor) {
    // 1. Aloque um 'novo' No usando malloc (lembre do sizeof)
    No *novo;
    novo = (No*)malloc(sizeof(No));
    // 2. Se o malloc falhar (novo == NULL), retorne 0 (erro)
    if (novo == NULL){
        return 0;
    }
    
    // 3. Coloque o 'valor' dentro de novo->dado

    valor = novo->dado;
    // 4. Faça novo->prox apontar para NULL (ele será o último da fila)
    novo->prox = NULL;
    
    // 5. O engate:
    // Se a fila estiver vazia (f->ini == NULL), o f->ini recebe o 'novo'
    // Senão (a fila já tem gente), a corda do último atual (f->fim->prox) recebe o 'novo'

    if (f->ini == NULL){
        f->ini = novo;
    }else{
        f->fim->prox = novo;
    }
    
    
    // 6. Atualize a placa f->fim para apontar para o 'novo'
    f->fim = novo;
    // 7. Retorne 1 (sucesso)
    return 1;
    
    // SEU CÓDIGO AQUI:
    
    
}