#include <stdio.h>

int main() {
	float v1,v2,v3,v4,media;
	
	printf("Insira o valor:");
	scanf("%f",&v1);

	printf("Insira o valor:");
	scanf("%f",&v2);

	printf("Insira o valor:");
	scanf("%f",&v3);

	printf("Insira o valor:");
	scanf("%f",&v4);
	
	media = (v1+v2+v3+v4)/4;
	
	printf("\nTotal da cotacao: %.2f", media);

	return 0;
}
