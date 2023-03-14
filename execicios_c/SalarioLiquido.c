#include <stdio.h>

int main(){
	
	float SalarioMinimo,HorasT,ValorHoras,SalarioBruto,Imposto,SalarioLiquido;
	
	printf("Insira o valor do salario minimo:");
	scanf("%f",&SalarioMinimo);
	
	printf("Insira as horas trabalhada:");
	scanf("%f",&HorasT);
	
	ValorHoras = SalarioMinimo/2;
	
	SalarioBruto = HorasT * ValorHoras;
	
	Imposto = SalarioBruto*0.03;
	
	SalarioLiquido = SalarioBruto - Imposto;
	
	printf("Valor da hora trabalhada: R$ %.2f\n", HorasT);
    printf("Salário bruto: R$ %.2f\n", SalarioBruto);
    printf("Imposto: R$ %.2f\n", Imposto);
	printf("O valor do salario liquido eh: %.2f", SalarioLiquido);
	
	return 0;
}
