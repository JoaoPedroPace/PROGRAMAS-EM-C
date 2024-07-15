#include <stdio.h>
#include <stdlib.h>
int main(void) {
   float num, dec, mil, cent;
printf("Digite o valor, em metros: ");
    scanf("%f", &num);

    dec = num * 10;
    mil = num * 1000;
    cent = num * 100;

    printf("Esse e o valor convertido em: \n em decimetros: %.2f \n em milimetros: %.2f \n em centimetros: %.2f ", dec, mil, cent);

printf("Pressione qualquer tecla para finalizar. ");
getchar();

system ("pause");
    return 0;
}