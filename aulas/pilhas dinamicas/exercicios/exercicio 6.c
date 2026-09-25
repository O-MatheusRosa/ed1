#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// O prato (a mesma struct de antes)
typedef struct No {
    int dado;
    struct No *prox; // Na pilha, o 'prox' aponta para o prato que está EMBAIXO dele
} No;

// A estrutura de controle
typedef struct {
    No *topo; // A gente só precisa olhar para o prato de cima!
} PilhaDinamica;

int empilhar(PilhaDinamica *p, int valor) {
    // 1. O MALLOC: Fabrique um prato novo (struct No)
    No *novo = (No*) malloc(sizeof(No));
    
    // 2. SEGURANÇA: Verifique se o malloc falhou
    if (novo == NULL) {
        return 0; 
    }
    
    // 3. A CARGA: Coloque o 'valor' dentro de novo->dado
    
    // ==========================================
    // 4. O ENGATE:
    // O prato novo vai ficar no topo, certo? 
    // Então, quem vai ficar embaixo dele? O prato que ERA o topo até agora!
    // Faça o 'prox' do prato 'novo' apontar para o 'p->topo' atual.
    
    // 5. ATUALIZAR A PILHA:
    // Agora que o prato novo já está em cima do antigo, avise a estrutura da pilha 
    // que o 'p->topo' oficial passou a ser o prato 'novo'.
    // ==========================================
    
    // SEU CÓDIGO AQUI (só os passos 3, 4 e 5):

    valor = novo->dado;

    novo->prox = p->topo;

    p->topo = novo;
    
    
    
    return 1; // Sucesso
}