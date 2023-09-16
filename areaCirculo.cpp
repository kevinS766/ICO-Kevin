#include <stdio.h>

int main()
{
	int lado, base, area;
	
	printf("Valor del lado: ");
	scanf_s("%d", &lado);

	printf("Valor del base: ");
	scanf_s("%d", &base);

	area = lado * base;

	printf("El area es: %d", area);
}