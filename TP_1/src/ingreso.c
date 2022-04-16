/*
 * ingreso.c
 *
 *  Created on: 15 abr. 2022
 *      Author: GAMER ASUS
 */
#include <stdio.h>
#include <stdlib.h>

float ingresoKm()
{
	float km=0;
	int retorno;

	printf("\nkm a ingresar: ");
	scanf("%f", &km);

	if((km>=400&&km<=25000))
	{
		retorno = km;
	}
	else
	{
		printf("Error, el km ingresado no pertenece al rango. Ingrese un km valido\n");
	}
	return retorno;
}

float precioAereolineas()
{
	float precioAereo=0;
	int retorno;

	printf("\nPrecio Aerolíneas Argentinas: ");
	scanf("%f", &precioAereo);

	if(precioAereo>=15000&&precioAereo<=600000)
	{
		retorno = precioAereo;
	}
	else
	{
		printf("\nError, no es un precio válido.Ingrese nuevamente\n");
	}

	return retorno;
}

float precioLat()
{
	float precioLatam=0;
	int retorno;

	printf("\nPrecio LATAM: ");
	scanf("%f", &precioLatam);

	if(precioLatam>=15000&&precioLatam<=600000)
	{
		retorno = precioLatam;
	}
	else
	{
		printf("\nError, no es un precio válido. Ingrese nuevamente\n");
	}
	return retorno;
}
