#include <stdio.h>

int main(int argi, char **argc){
	int i;
	for(i = 0; i < 255; i++) printf("%d = %c\n",i,i);
	
	return 0;
}
