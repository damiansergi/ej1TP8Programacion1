#include <stdio.h>

int main (void){

	char a = 'h';
	char *p;
	p = &a; //modificacion
	printf("a: %c\n", *p);
	printf("do");

	return 0;
}
