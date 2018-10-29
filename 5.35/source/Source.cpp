#include<stdio.h>
#include<stdlib.h>

int main() {
	int n, j, k=0;
	unsigned  a[100];
	scanf_s("%d", &n);
	a[0] = 0;
	a[1] = 1;		
	if (n >= 1)
	{
		printf("%d,", a[0]);
	}
	if (n >= 2)
	{
		printf("%d,", a[1]);
	}
	for (j = 2; j <n; j++) 
	{
		a[j] = a[j - 1] + a[j - 2];
		printf("%u,", a[j]);
	}
	printf("...");
	system("pause");
	return 0;


}