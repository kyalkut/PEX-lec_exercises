#include <stdio.h>

int main() {
	char a = 2, b = 7, c;
	c = a + b;
	printf("c = %d + %d = %d\n", a, b, c);

	c = a + 255;
	printf("c = %d + 255 = %d\n", a, c);

	c = a + 127;
	printf("c = %d + 127 = %d\n", a, c);
}
