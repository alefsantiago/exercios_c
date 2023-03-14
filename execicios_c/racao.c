#include <stdio.h>

int main(){
	
	float PesoKg,PesoG,Consumo1,Consumo2,ConsumoTotal,resto;
	
	printf("Insira o peso:");
	scanf("%f",&PesoKg);
	
	PesoG = PesoKg*1000;
	
	printf("Insira o consumo 1 de racao em gramas:");
	scanf("%f",&Consumo1);
	
	printf("Insira o consumo 2 de racao em gramas:");
	scanf("%f",&Consumo2);
	
	ConsumoTotal = 5*(Consumo1+Consumo2);
	
	resto = PesoG - ConsumoTotal;
	
	printf("Resto de ração eh: %.2f", resto);
	
	return 0; 
	
}
