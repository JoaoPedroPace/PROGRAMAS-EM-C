#include <stdio.h>

int main(){
	
	int a, b, soma, div, sub, mult;

	
	printf("Escreva um número: ");
	scanf("%d", &a);
	
	printf("Escreva um número: ");
	scanf("%d", &b);
	
	soma = a + b;
	div = a / b;
	sub = a - b;
	mult = a * b;
	
	printf("Esse é o resultado da soma: %d", soma);
	printf("\nEsse é o resultado da divisão :%d", div);
	printf("\nEsse é o resultado da subtração :%d", sub);
	printf("\nEsse é o resultado da multiplicação :%d", mult);   
	
	return 0;
	
}