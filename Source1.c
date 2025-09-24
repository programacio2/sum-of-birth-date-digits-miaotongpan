#include<stdio.h>

int main()
{
	int dia, mes, any;

	printf("Escriu el dia (DD) del teu aniversari: ");
	scanf_s("%d", &dia);
	printf("Escriu el mes (MM) del teu aniversari: ");
	scanf_s("%d", &mes);
	printf("Escriu el any (AAAA) del teu aniversari: ");
	scanf_s("%d", &any);

	int suma = dia + mes + any;

	printf("La suma de su nacimiento es: %d", suma);
}