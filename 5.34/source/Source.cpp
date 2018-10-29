#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b, c, d;
	scanf_s("%d%d", &a, &b);
	d = a;
	if (b > 0) 
		{
			for (c = 1; c < b; c++)
			{
				d = d * a;
			}
			printf("%d", d);
		}
	else if (b < 0)
	{
		for (c = -1; c > b; c--)
		{
			d = d * a;
		}
		printf("1/%d", d);
	}
	else
	{
		d = 1;
		printf("%d", d);
	}
	
	system("pause");
	return 0;
}