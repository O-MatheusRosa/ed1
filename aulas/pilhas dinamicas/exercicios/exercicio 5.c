#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No *prox;
} No;

typedef struct {
    No *ini;
    No *fim;
} FilaDinamica;

// Função: Remover o primeiro elemento da fila e retornar o valor dele.
// Se a fila estiver vazia, retorne -1.
int remover_fila(FilaDinamica *f) {

    
    // OBJETIVOS DA SUA LÓGICA:
    // 1. Verifique se a fila está vazia. Se estiver, retorne -1.
    // 2. Crie um ponteiro extra para "segurar" o vagão atual que está no ini (para não perder o endereço dele).
    // 3. Salve a carga (dado) desse vagão em uma variável int normal.
    // 4. Avance o f->ini para o próximo vagão (ele passa a ser o novo primeiro da fila).
    // 5. Se o f->ini virou NULL (ou seja, você tirou o único vagão que tinha), garanta que o f->fim também vire NULL.
    // 6. Use o comando free(...) passando aquele ponteiro extra para destruir o vagão velho e devolver a memória pro PC.
    // 7. Retorne o valor da carga que você salvou.
    
    // SEU CÓDIGO AQUI:
    No *auxiliar = f->ini;
    int x;

    if (f->ini == NULL){
        return -1;
    }else{
        x = auxiliar->dado;
        f->ini = f->ini->prox;
    }

    if (f->ini == NULL){
        f->fim = NULL;
    }

    free(auxiliar);   
}