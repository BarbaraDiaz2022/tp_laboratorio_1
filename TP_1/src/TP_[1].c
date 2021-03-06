/*
 ============================================================================
 Name        : TP_[1].c
 Author      : Diaz Barbara
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "calcular.h"
#include "ingreso.h"

int main(void) {
	setbuf(stdout, NULL);

    int opcion;
	float km=0;
	float precioAereo=0;
	float precioLatam=0;
	float descuentoL;
	float descuentoA;
	float interesL;
	float interesA;
	float precioUnitarioL;
	float precioUnitarioA;
	float precioBitCoinL;
	float precioBitCoinA;
	float diferencia;

	do
	{
		printf("Indique una opci?n:\n1- Ingresar km: \n"
			   "2- Ingresar precio de vuelos: Aerol?neas, Latam\n"
			   "3- Calcular costos\n"
			   "4- Precio final\n"
			   "5- Carga forzada de datos\n"
			   "6- Salir\n");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case 1:
				km = ingresoKm();
				break;
			case 2:
				precioAereo = precioAereolineas();
				precioLatam = precioLat();
			case 3:
				if(km!=0&&precioAereo!=0&&(precioLatam!=0))
				{
					calcularDebito(precioAereo, precioLatam, km,&descuentoL,&descuentoA);
					calcularInteres(precioAereo, precioLatam, km, &interesL, &interesA);
					calcularBC(precioAereo, precioLatam, km, &precioBitCoinL, &precioBitCoinA);
					calcularPrecioUnitario(precioAereo, precioLatam, km, &precioUnitarioL,&precioUnitarioA);
					calcularDiferencia(precioAereo, precioLatam, km, &diferencia);
				}
				else
				{
					printf("Error. Faltan datos\n");
				}
			break;
			case 4:
				mostrar(descuentoL, descuentoA, interesL, interesA, precioBitCoinL, precioBitCoinA,precioUnitarioL, precioUnitarioA, diferencia);
				break;
			case 5:
				calcularDebito(162965, 159339, 7090,&descuentoL,&descuentoA);
				calcularInteres(162965, 159339, 7090, &interesL, &interesA);
				calcularBC(162965, 159339, 7090, &precioBitCoinL, &precioBitCoinA);
				calcularPrecioUnitario(162965, 159339, 7090, &precioUnitarioL,&precioUnitarioA);
				calcularDiferencia(162965, 159339, 7090, &diferencia);
				mostrar(descuentoL, descuentoA, interesL, interesA, precioBitCoinL, precioBitCoinA,precioUnitarioL, precioUnitarioA, diferencia);
				break;
		}
	}while(opcion!=6);
//trabajo terminado
	return EXIT_SUCCESS;
}
