#include <stdio.h>
#include <stdlib.h>

int main() {
	char a;
	scanf_s("%c", &a);
	a = a + 32;
	printf("%c", a);
	system("pause");
	return 0;
}