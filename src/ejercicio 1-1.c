/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 3-1: Crear una función que muestre por pantalla
  el número entero que recibe como parámetro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void recibirNumero(int numero);

int main(void)
{
	setbuf(stdout,NULL);

	int numero;

	printf("ingrese un numero");
	scanf("%d",&numero);

	recibirNumero(numero);

	return EXIT_SUCCESS;
}

void recibirNumero(int numero)
{
	printf("el numero es %d",numero);
}
