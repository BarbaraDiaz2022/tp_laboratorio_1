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
	int flag=0;
	int retorno = -1;

	printf("\nkm a ingresar: ");
	scanf("%f", &km);

	if((km>=400&&km<=25000)||(flag==0))
	{
		retorno = km;
		flag = 1;
	}
	else
	{
		printf("error, el km ingresado no pertenece al rango. ingrese un km valido\n");
	}
	return retorno;
}

float precioAereolineas()
{
	float precioAereo=0;
	int flag = 0;

	if((precioAereo>=15000&&precioAereo<=600000)||(flag==0))
	{
		printf("\nPrecio Aerolíneas Argentinas: ");
		scanf("%f", &precioAereo);
		flag = 1;
	}
	else
	{
		printf("\nError, no es un precio válido.Ingrese nuevamente\n");
	}
	return precioAereo;
}

float precioLat()
{
	float precioLatam=0;
	int flag=0;

	if((precioLatam>=15000)||(precioLatam<=600000)||(flag==0))
	{
		printf("\nPrecio LATAM: ");
		scanf("%f", &precioLatam);
		flag = 1;
	}
	else
	{
		printf("\nError, no es un precio válido. Ingrese nuevamente\n");
	}
	return precioLatam;
}
