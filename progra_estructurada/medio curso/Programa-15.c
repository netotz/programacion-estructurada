#include <stdio.h>

int main(int argi, char **argc){
	int a,b;
	printf("Para saber si dos numeros son multiplos introduzca:\n");
	printf("Primer numero, segundo: "); 
	scanf("%d,%d",&a,&b);
	printf("\n");
	if(a%b == 0 && b%a == 0) printf("Ambos son multiplos");
	else if(a%b == 0) printf("%d es multiplo de %d",b,a);
	else if(b%a == 0) printf("%d es multiplo de %d",a,b);
	else printf("No son multiplos");
	
	return 0;
}
