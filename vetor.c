#include <stdio.h>

void lernumeros(int linhas, int colunas, int matriz[linhas][colunas]) {
    printf("Escreva os numeros da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimematriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    printf("Conteudo da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tam1, tam2;

    printf("Escreva o tamanho de linhas e colunas da matriz, respectivamente: ");
    scanf("%d %d", &tam1, &tam2);

    int matriz[tam1][tam2];

    lernumeros(tam1, tam2, matriz);
    imprimematriz(tam1, tam2, matriz);

    return 0;
}
