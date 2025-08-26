#include <stdio.h>





// Função para movimentacao do Bispo (diagonal para direita/baixo)
void moverBispo(int casas) {
    if (casas == 0) return; // caso base
    printf("Diagonal (Baixo-Direita)\n");
    moverBispo(casas - 1); 
}

// Função para movimentacao da Torre (direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função para movimentacao da Rainha (esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    
    // Nível Novato - Movimentacao das Pecas
    
    const int casasBispo = 3;   // bispo anda 3 casas em diagonal
    const int casasTorre = 4;   // torre anda 4 casas para direita
    const int casasRainha = 2;  // rainha anda 2 casas para esquerda

    printf("=== Movimentacao do Bispo ===\n");
    for (int i = 0; i < casasBispo; i++) {
        printf("Diagonal (Baixo-Direita)\n");
    }

    printf("\n=== Movimentacao da Torre ===\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n=== Movimentacao da Rainha ===\n");
    for (int i = 0; i < casasRainha; i++) {
        printf("Esquerda\n");
    }

    
    // Nivel Aventureiro - Movimentacao do Cavalo (em L)
    
    printf("\n=== Movimentacao do Cavalo ===\n");

    int baixo = 2, esquerda = 1;

    // Loop externo controla movimento para baixo
    for (int i = 0; i < baixo; i++) {
        printf("Baixo\n");
       
        int j = 0;
        while (j < 1) {
            j++;
        }
    }

    // Depois de 2 casas para baixo, 1 para esquerda
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < esquerda);

    
    // Nivel Mestre - Usando Funções Recursivas

    printf("\n Movimentacao do Bispo\n");
    moverBispo(casasBispo);

    printf("\n Movimentacao da Torre\n");
    moverTorre(casasTorre);

    printf("\n Movimentacao da Rainha \n");
    moverRainha(casasRainha);

    // Cavalo avancado 
    
    printf("\n Movimentacao Avancada do Cavalo\n");

    for (int x = 0, y = 0; x < 3 && y < 2; x++, y++) {
        if (x == 2) {
            printf("Baixo\n");
            continue; 
        }
        if (y == 1) {
            printf("Esquerda\n");
            break;
        }
        printf("Baixo\n");
    }

    return 0;
}
