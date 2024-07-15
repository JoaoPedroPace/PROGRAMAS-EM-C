#include <stdio.h>

int main() {
    int i, j;

    // Laço externo para os números de 1 a 9
    for (i = 1; i <= 9; i++) {
        // Laço interno para multiplicar o número atual por 1 a 9
        for (j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Adiciona uma linha em branco entre as tabuadas
    }

    return 0;
}
