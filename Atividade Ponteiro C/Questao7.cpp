#include <stdio.h>

int main() {
    int pontos[4][4];
    int *p = &pontos[0][0]; 
    int pares = 0, impares = 0;
    int somaJogador[4] = {0}, somaSet[4] = {0};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Pontos do jogador %d no set %d: ", i + 1, j + 1);
            scanf("%d", (p + i * 4 + j)); 
        }
    }

    printf("\nMatriz de pontos:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int valor = *(p + i * 4 + j);
            printf("%d\t", valor);

            if (valor % 2 == 0) {
                pares++;
            } else {
                impares++;
            }

            somaJogador[i] += valor;
            somaSet[j] += valor;
        }
        printf("\n");
    }

    printf("\nPontos pares: %d | Pontos impares: %d\n", pares, impares);

    int maiorJogador = 0;
    for (int i = 1; i < 4; i++) {
        if (somaJogador[i] > somaJogador[maiorJogador]) {
            maiorJogador = i;
        }
    }
    printf("\nJogador com maior pontuacao: Jogador %d (%d pontos)\n", maiorJogador + 1, somaJogador[maiorJogador]);

    int setMaisDisputado = 0;
    for (int j = 1; j < 4; j++) {
        if (somaSet[j] > somaSet[setMaisDisputado]) {
            setMaisDisputado = j;
        }
    }
    printf("Set mais disputado: Set %d (%d pontos)\n", setMaisDisputado + 1, somaSet[setMaisDisputado]);

    printf("\nMedia de pontos por jogador:\n");
    for (int i = 0; i < 4; i++) {
        printf("Jogador %d: %.2f\n", i + 1, somaJogador[i] / 4.0);
    }

    return 0;
}