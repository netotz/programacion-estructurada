#include <stdio.h>
#include <stdlib.h>

int main(int argi, char **argc){
	int a = 1, b = 2;
	int *ptr_a, *ptr_b;
	ptr_a = &a;
	ptr_b = &b;
	
	printf("a = %d\nb = %d\n\n",a,b);
	printf("apuntador a = %p\napuntador b = %p\n\n",ptr_a,ptr_b);
	printf("apuntador a = %d\napuntador b = %d\n\n",*ptr_a,*ptr_b);
	
	ptr_a = ptr_b;
	ptr_b = ptr_a + 1;
	
	printf("a = %d\nb = %d\n\n",a,b);
	printf("apuntador a = %p\napuntador b = %p\n\n",ptr_a,ptr_b);
	printf("apuntador a = %d\napuntador b = %d",*ptr_a,*ptr_b);
	
	return 0;
}
