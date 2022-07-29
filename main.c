#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int calcular_maximum_bitwise(int v1, int v2) 
{
	int a[10],b[10], i;

	if (v1 > v2)
	{
		for (i = 0; v1 > 0; i++)
		{
			a[i] = v1 % 2;
			v1 = v1 / 2;
		}
		for (i = i - 1; i >= 0; i--)
		{
			printf("%d", a[i]);
		}
	}
	

	else
	{
		for (i = 0; v2 > 0; i++)
		{
			b[i] = v2 % 2;
			v2 = v2 / 2;
		}
		for (i = i - 1; i >= 0; i--)
		{
			printf("%d", b[i]);
		}
	}

	
}
int main() 
{
	int valor_1, valor_2, maior_valor;
	printf("Informe os valores.\n");
	scanf_s("%d %d", &valor_1, &valor_2);
	printf("O maior valor e: ");
	maior_valor = calcular_maximum_bitwise(valor_1, valor_2);
	return 0;
}