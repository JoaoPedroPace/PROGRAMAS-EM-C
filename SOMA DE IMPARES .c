#include <stdio.h>
#include <stdlib.h>
int main(){
	 int i, soma = 0;
	 
	 for(i = 1; i <= 499; i += 2){
	 	
	 	if (i % 3 == 0){
	 		
	 		soma += i;
	 		
	 		printf("%d\n", i);
	 		
		 }
	 }
	 
	 printf("\n O resultado da soma destes numeros é: %d ", soma);
	 
	 system ("pause");
	 	return 0;
}