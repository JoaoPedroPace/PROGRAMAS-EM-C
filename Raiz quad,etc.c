#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    float a, b, raiz = 0,soma = 0, prod = 0;
    float sen = 0, qua = 0;
    int mod = 0;
    float qua2 = 0;

    printf("Insira o primeiro numero: ");
scanf("%f", &a);

    printf("Insira o segundo numero: ");
    scanf("%f", &b);

    soma = a + b;
    prod = a * (b * b);
    qua = a * a;
    qua2 = (b * b) + (a* a);
     raiz = sqrt(qua2);
    mod = a * - 1;

    printf("\nProduto do primeiro pelo quadrado do segundo: %.2f", prod);
    printf("\nSoma: %.2f", soma);
    printf("\nQuadrado do primeiro: %.2f", qua);
    printf("\nRaiz quadrada da soma dos quadrados: %.2f", raiz);
    printf("\nModulo: %d", mod);
    return 0;
    system ("pause");
}

