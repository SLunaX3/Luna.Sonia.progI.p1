/*
 ============================================================================
 Name        : Parcial_ProgI_Práctico.c
 Author      : Luna, Sonia

 ============================================================================



 */

#include <stdio.h>
#include <stdlib.h>

int aplicarDescuento(int);
int contarCaracteres(vec[], char n, int tam);

int main(void) {
	setbuf(stdout, NULL);

	float producto = 100;
	float descuento;

	char cadena [10] = "Juaniton";
	char letra;

	descuento = aplicarDescuento(producto);


	printf("Precio con descuento: $%.2f \n", descuento);

	letra = contarCaracteres(cadena, 'n', 10);

	printf("N se repite: %d \n", letra);

	return EXIT_SUCCESS;
}

int aplicarDescuento(int producto)
{
	float descuento;
	descuento = producto - (producto*0.05);

	return descuento;
}


int contarCaracteres(int vec[], char n)
{

