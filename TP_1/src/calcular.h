/*
 * calcular.h
 *
 *  Created on: 13 abr. 2022
 *      Author: GAMER ASUS
 */

#ifndef CALCULAR_H_
#define CALCULAR_H_
//prueba 1

/**
 * @brief Esta función se encarga de calcular el 10% de descuento a los dos precios ingresados por el usuaio (que los recibe como parametros)
 * @param precioA valor de tipo float
 * @param precioL valor de tipo float
 * @param km valor de tipo float
 * @param descuentoL puntero de tipo flotante
 * @param descuentoA puntero de tipo flotante
 */
void calcularDebito(float precioA, float precioL, float km,float* descuentoL, float* descuentoA);

/**
 * @brief
 * @param precioA
 * @param precioL
 * @param km
 * @param interesL
 * @param interesA
 */
void calcularInteres(float precioA, float precioL, float km, float* interesL, float* interesA);

/**
 * @brief
 * @param precioA
 * @param precioL
 * @param km
 * @param precioBitCoinL
 * @param precioBitCoinA
 */
void calcularBC(float precioA, float precioL, float km, float* precioBitCoinL, float* precioBitCoinA);

/**
 * @brief
 * @param precioA
 * @param precioL
 * @param km
 * @param precioUnitarioL
 * @param precioUnitarioA
 */
void calcularPrecioUnitario(float precioA, float precioL, float km, float* precioUnitarioL, float* precioUnitarioA);

/**
 * @brief
 * @param precioA
 * @param precioL
 * @param km
 * @param diferencia
 */
void calcularDiferencia(float precioA, float precioL, float km, float* diferencia);

/**
 * @brief
 * @param descuentoL
 * @param descuentoA
 * @param interesL
 * @param interesA
 * @param precioBitCoinL
 * @param precioBitCoinA
 * @param precioUnitarioL
 * @param precioUnitarioA
 * @param diferencia
 */
void mostrar(float descuentoL, float descuentoA,float interesL,float interesA, float precioBitCoinL, float precioBitCoinA, float precioUnitarioL,float precioUnitarioA,float diferencia);

#endif /* CALCULAR_H_ */
