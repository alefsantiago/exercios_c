#include <stdio.h>

int main(){
	
	float area,raio;
	
	printf("Insira o valor do raio:");
	scanf("%f",&raio);
	
	area = 3.14*raio*raio;
	
	printf("Aqui esta o resultado: %.2f\n", area);
	
	return 0;
}
