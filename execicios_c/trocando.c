#include <stdio.h>

int main(){
	
	int x,y,auxiliar;
	
	printf("Insira um valor no X:");
	scanf("%d",&x);
	printf("Insira um valor no y:");
	scanf("%d",&y);
	
	auxiliar = x;
	x = y;
	y = auxiliar;
	
	printf("Novo valor de x: %d\n", x);
    printf("Novo valor de y: %d\n", y);
    
    return 0;
	
}
