#include <stdio.h>
#include <stdlib.h>
int main(){
	
	float distancia, combustivel_gasto, consumo;
	
	
	printf("Digite quantos KM seu carro andou: ");
	scanf("%f", &distancia);
	
	printf("Digite quantos LITROS seu carro gastou: ");
	scanf("%f", &combustivel_gasto);
	
	consumo = distancia / combustivel_gasto;
	
	printf("Esse e seu consumo medio de combustivel: \n%.2f", consumo);
	
	return 0;
	
	system ("pause");
	
	
}