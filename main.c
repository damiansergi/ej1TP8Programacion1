#include <stdio.h>

int main (void){

	char a = 'h';
	char *p;
	p = &a;
	printf("a: %c\n", *p);

	return 0;
}
