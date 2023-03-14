#include <stdio.h>

int main() {
	float salario,NovoSalario,taxa,aumento;
	
	printf("Insira seu salario:");
	scanf("%f", &salario);
	printf("Insira a taxa:");
	scanf("%f", &taxa);

  aumento = salario*taxa/100;
  NovoSalario = salario+aumento;
  
  printf("O valor do aumento eh: %.2f",aumento);
  printf("\nO seu novo salario eh: %.2f",NovoSalario);
	
	return 0;
}
