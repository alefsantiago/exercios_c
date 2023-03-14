#include <stdio.h>

int main(){
	int a,b,c,r,s,d;
	
	printf("Insira um valor inteiro:");
	scanf("%d",&a);

	printf("Insira um valor inteiro:");
	scanf("%d",&b);
	
	
	printf("Insira um valor inteiro:");
	scanf("%d",&c);
	
	r = (a+b)*(a+b);
	
	s = (b+c)*(b+c);
	
	d = (r+s)/2;
	
	printf("O resulta do calculo eh: %d",d);
	
	return 0;

}
