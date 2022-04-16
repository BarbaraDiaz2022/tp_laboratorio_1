/*
 * calcular.c
 *
 *  Created on: 13 abr. 2022
 *      Author: GAMER ASUS
 */

#include <stdio.h>
#include <stdlib.h>

void calcularDebito(float precioA, float precioL, float km, float* descuentoL, float* descuentoA)
{
		if(descuentoL!=NULL&&descuentoA!=NULL)
		{
			*descuentoL = precioL - (precioL * 10 / 100);
			*descuentoA = precioA - (precioA * 10 / 100);
		}

}
void calcularInteres(float precioA, float precioL, float km, float* interesL, float* interesA)
{
		if(interesL!=NULL&interesA!=NULL)
		{
			*interesL = precioL + (precioL * 25 / 100);
			*interesA = precioA + (precioA * 25 / 100);
		}
}

void calcularBC(float precioA, float precioL, float km, float* precioBitCoinL, float* precioBitCoinA)
{
		float bitCoin = 4606954.55;
		if(precioBitCoinL!=NULL&&precioBitCoinA!=NULL)
		{
			*precioBitCoinL = precioL / bitCoin;
			*precioBitCoinA = precioA / bitCoin;
		}
}

void calcularPrecioUnitario(float precioA, float precioL, float km, float* precioUnitarioL, float* precioUnitarioA)
{
	if (precioUnitarioL!=NULL&&precioUnitarioA!=NULL)
	{
		*precioUnitarioL = precioL / km;
		*precioUnitarioA = precioA / km;
	}
}

void calcularDiferencia(float precioA, float precioL, float km, float* diferencia)
{
	if(diferencia!=NULL&&(precioA>precioL))
	{
		*diferencia = precioA - precioL;
	}
	else
	{
		*diferencia = precioL - precioA;
	}
}

void mostrar(float descuentoL, float descuentoA, float interesL, float interesA, float precioBitCoinL, float precioBitCoinA,float precioUnitarioL,float precioUnitarioA,float diferencia)
{
	printf("Latam:\n"
	       "a) Precio con tarjeta de d�bito: $ %.2f\n"
		   "b) Precio con tarjeta de cr�dito: $ %.2f\n"
		   "c) Precio pagando con bitcoin: %f BTC\n"
		   "d) Precio unitario: $ %.2f", descuentoL, interesL,precioBitCoinL,precioUnitarioL);

	printf("\nAerol�neas:\na) Precio con tarjeta de d�bito: $ %.2f\n"
	       "b) Precio con tarjeta de cr�dito: $ %.2f\n"
		   "c) Precio pagando con bitcoin: %f BTC\n"
		   "d) Precio Unitario: $ %.2f\n"
		   "La diferencia de precio es: $ %.2f\n\n", descuentoA, interesA, precioBitCoinA,precioUnitarioA,diferencia);
}
