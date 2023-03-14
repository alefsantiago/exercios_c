#include <stdio.h>

int main() {
    float valor, total;
    
    // Entrada de dados
    printf("Digite o preco do DVD: ");
    scanf("%f", &valor);
    
    // processamento de dados
    total = valor * 3;
    
    // saida de dados 
    printf("total eh: R$ %.2f", total);
    
    return 0;
}

