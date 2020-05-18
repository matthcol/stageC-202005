/*
 * variable.c
 *
 *  Created on: 18 mai 2020
 *      Author: Matthias
 */

#include <stdio.h>
#include <stdbool.h>

int main(){
	// déclarations de variables
	double temperatureCelcius; // variable de type float (64 bits)
	double temperatureKelvin;
	double temperatureFahrenheit;
	int pression; // entier 32 bits de -2G à 2G env
	int indice;
	bool faitIlBeau;
	// affectations
	temperatureCelcius = 21.3; // affectation
	pression = 1020; // 1020 est decomposé en base 2 (exact)
	// calculs
	temperatureKelvin = temperatureCelcius + 273;
	temperatureFahrenheit = (temperatureCelcius * 9 / 5.0) + 32;
	// alternative
	temperatureFahrenheit = temperatureCelcius * 9;
	temperatureFahrenheit /=  5.0; // temperatureFahrenheit = temperatureFahrenheit / 5.0
	temperatureFahrenheit +=  30.0; // temperatureFahrenheit = temperatureFahrenheit + 30.0
	printf("t++ %f\n", temperatureFahrenheit++); // temperatureFahrenheit = temperatureFahrenheit + 1
			// affiche 68.34 puis calculé/affecté 69.34
	printf("++t %f\n", ++temperatureFahrenheit); // temperatureFahrenheit = temperatureFahrenheit + 1
			// calculé/affecté 70.34 puis affiché 70.34
	// affichage
	printf("La température est %.3f °C et la pression de %d HPa\n",
			temperatureCelcius, pression);
	printf("La température en Kelvin est %.3f K\n", temperatureKelvin);
	printf("La température en Fahreinheit est %.3f F\n", temperatureFahrenheit);

	printf("Division entière 9/5 (quotient) = %d\n", 9 / 5);
	printf("Division entière 9 mod 5 (reste) = %d\n", 9 % 5);
	printf("Division flottants 9.0/5.0 = %f\n", 9.0 / 5.0);

	printf("Test %d\n", temperatureCelcius > 15);
	printf("Test %d\n", temperatureCelcius == 15);

	printf("Décalage %d\n", 21>>1); // 10101=21 >> 1010=10
	printf("Et bit à bit (and bitwise) %d\n", 21 & 7);
	//   10101
	// & 00111
	// = 00101

	if (temperatureCelcius > 15) {  // bloc si test est vrai
		printf("Il fait beau\n");
		printf("Allons à la plage ou à la montagne\n");
	} else { // bloc si les test est faux
		printf("Il fait un peu frais\n");
		printf("Restons à la maison\n");
	}

	if (pression == 1020) {  // test vrai
		printf("Cas spécial 1020 HPa\n");
	}
	if (pression == 1020)   // test vrai
		printf("Cas spécial 1020 (2) HPa\n");

	if (pression == 1021)  // test faux
		printf("Cas spécial 1021 HPa\n");
	printf("Toujours fait\n");

	// attention !!!!!
	if (pression = 1022)  // affectation + test valant 1022 équivalent à vrai
		printf("Cas spécial 1022 HPa\n");

	if ((temperatureCelcius > 15) && (pression > 1000)) {
		printf("Il fait bon\n");
	}

	// switch case utilisé pour un entier, un caractère ou type énuméré
	pression = 980;
	switch (pression) {
		case 970:
		case 980:
		case 990:
			printf("* tempête\n");
			break;
		case 1000:
			printf("* variable\n");
			break;
		case 1030:
			printf("* beau temps\n");
			break;
		default:
			printf("* non répertoriée\n");
	}

//	if (pression >= 1030)
//		indice = pression / 10 - 103;
//	else
//		indice = - (pression - 940);

	// expression conditionnelle
	indice = (pression >= 1030) ? (pression / 10 - 103) : -(pression - 940);
	printf("Indice : %d\n", indice);
}


