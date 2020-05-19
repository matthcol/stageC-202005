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
	pression = 1020;
	indice = (pression >= 1030) ? (pression / 10 - 103) : -(pression - 940);
	printf("Indice : %d\n", indice);

	// boucles : for, while, do..while
	int nb = 0;  // déclaration avec initialisation
		// 10 5 2 1 0
	int reste;
		// 1 0 1 0 1
	while (nb != 0) {
		reste = nb % 2;
		printf("%d", reste);
		nb /= 2;
	}
	printf("\n");

	nb = 0;  // 10 5 2 1 0
	// reste; // 1 0 1 0 1
	do {
		reste = nb % 2;
		printf("%d", reste);
		nb /= 2;
	} while (nb != 0);
	printf("\n");


//
//	nb = 1;
//	while (nb>0) {
//		nb++;
//	}
//	printf("Nb : %d\n", nb);
//
//	// boucle infinie
////	double nb2 = 1;
////	while (nb2 > 0) {
////		nb2++;
////	}
////	printf("Nb : %f\n", nb2);
//
//	// boucle potentiellement infinie mais dans laquelle on ne rentre pas
//	double nb2 = -1;
//	while (nb2 > 0) {
//		nb2++;
//	}
//	printf("Nb : %f\n", nb2);
//

	// autres types entiers
	unsigned int n = 3000000000;
	printf("Entier non signé : %u %d %x\n", n, n, n);
	int nn = -1294967296;
	printf("Entier signé : %u %d %x\n", nn, nn, nn);
	printf("Tailles des entiers (octets) : %d %d %d %d %d\n",
			sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long));

	for (int i = 1; i <= 10; i++) {
		printf("%d ",i);
	}
	printf("\n");

	for (int i = 1; i <= 10; i+=2) {
		printf("%d ",i);
	}
	printf("\n");

	for (int i = 10; i >= 0; i--) {
		printf("%d ",i);
	}
	printf("\n");


}


