#include <stdio.h>

int main()
{
	int lado, area;
	
	printf("Valor del lado: ");
	scanf_s("%d", &lado);

	area = lado * lado;

	printf("El area es: %d", area);
}