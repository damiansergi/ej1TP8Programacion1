#include <stdio.h>

int main (void){

	char a = 'h';	//modificacion
	char *p;
	p = &a;
	printf("a: %c\n", *p);

	return 0;
}
