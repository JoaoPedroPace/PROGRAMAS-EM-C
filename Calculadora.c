#include<stdio.h>
#include <stdlib.h>
int main(){
	
	float a , b, resultado; 
	char oper;
	
	printf("Escreva um numero:");
	scanf("%f", &a);
	
	printf("Escreva um numero: ");
	scanf("%f", &b);
	
	printf("Escreva um operador aritmético: (*, /, +, -)");
	scanf(" %c", &oper);
	
	
	
switch (oper){
	
	case '*':
		resultado = a * b;
		printf("Esse foi o resultado da multiplicação: %f", resultado);
		break;
		
	case '/':
		resultado = a / b;
		printf("Esse foi o resultado da divisão : %f", resultado);
		break;
	case '+':
	    resultado = a + b;
		printf("Esse foi o resultado da soma : %f", resultado);
		break;
	case '-' :
	    resultado = a - b;
	    printf("Esse foi o resultado da subtração: %f", resultado);
	    break;	
		default:
			printf("Operador inválido! ");
			break;
	
	
}

system ("pause");
return 0;
	
}