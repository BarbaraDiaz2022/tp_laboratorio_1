/*
 * calcular.h
 *
 *  Created on: 13 abr. 2022
 *      Author: GAMER ASUS
 */

#ifndef CALCULAR_H_
#define CALCULAR_H_

/**
 * @brief Esta función se encarga de calcular el 10% de descuento a los dos precios ingresados por el usuario que los recibe como parametros
 * @param precioA valor de tipo float
 * @param precioL valor de tipo float
 * @param km valor de tipo float
 * @param descuentoL puntero de tipo flotante
 * @param descuentoA puntero de tipo flotante
 */
void calcularDebito(float precioA, float precioL, float km,float* descuentoL, float* descuentoA);

/**
 * @brief Esta función se encarga de calcular el 25% de aumento a los dos precios ingresados por el usuario que los recibe como parametros
 * @param precioA valor de tipo float
 * @param precioL valor de tipo float
 * @param km valor de tipo float
 * @param interesL puntero de tipo flotante
 * @param interesA puntero de tipo flotante
 */
void calcularInteres(float precioA, float precioL, float km, float* interesL, float* interesA);

/**
 * @brief Esta función calcula el precio a pagar en bitcoin con los dos precios ingresados por el usuario que recibe como parametros
 * @param precioA valor de tipo flotante
 * @param precioL valor de tipo flotante
 * @param km valor de tipo flotante
 * @param precioBitCoinL puntero de tipo flotante
 * @param precioBitCoinA puntero de tipo flotante
 */
void calcularBC(float precioA, float precioL, float km, float* precioBitCoinL, float* precioBitCoinA);

/**
 * @brief Esta función calcula el precio unitario (valor por km) de los dos precios ingresados por el usuario que recibe como parametros
 * @param precioA valor de tipo flotante
 * @param precioL valor de tipo flotante
 * @param km valor de tipo flotante
 * @param precioUnitarioL puntero de tipo flotante
 * @param precioUnitarioA puntero de tipo flotante
 */
void calcularPrecioUnitario(float precioA, float precioL, float km, float* precioUnitarioL, float* precioUnitarioA);

/**
 * @brief Esta función calcula la diferencia entre los dos precios ingresados
 * @param precioA valor de tipo flotante
 * @param precioL valor de tipo flotante
 * @param km valor de tipo flotante
 * @param diferencia puntero de tipo flotante
 */
void calcularDiferencia(float precioA, float precioL, float km, float* diferencia);

/**
 * @brief Esta función se encarga de mostrar los valores obtenidos cuando el usuario ingresa la opción 3 del menú
 * @param descuentoL valor de tipo flotante
 * @param descuentoA valor de tipo flotante
 * @param interesL valor de tipo flotante
 * @param interesA valor de tipo flotante
 * @param precioBitCoinL valor de tipo flotante
 * @param precioBitCoinA valor de tipo flotante
 * @param precioUnitarioL valor de tipo flotante
 * @param precioUnitarioA valor de tipo flotante
 * @param diferencia valor de tipo flotante
 */
void mostrar(float descuentoL, float descuentoA,float interesL,float interesA, float precioBitCoinL, float precioBitCoinA, float precioUnitarioL,float precioUnitarioA,float diferencia);

#endif /* CALCULAR_H_ */
