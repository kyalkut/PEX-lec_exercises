// function definitions, before the main vith void

#include <stdio.h>

void print_int(int a) {
	printf("a = %d\n", a);
}

int main()
{
	int a = 5;
	print_int(a);
	return(0);
}