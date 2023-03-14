#include <stdio.h>

int main(){
	
	int AnoAtual,AnoNasc,idade;
	
	printf("Insira o ano atual:");
	scanf("%d",&AnoAtual);
	printf("Insira a sua Data de Nascimento:");
	scanf("%d",&AnoNasc);
	
	idade = AnoAtual - AnoNasc;
	
	printf("Descobri a sua idade: %d", idade);
	
	return 0;
	
	
}
