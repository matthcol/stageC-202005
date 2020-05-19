/*
 * fibo.c
 *
 *  Created on: 19 mai 2020
 *      Author: Matthias
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {  //i.e string argv[]
	for (int i=0; i<argc; i++) {
		printf("Argument n°%d : %s\n", i, argv[i]);
	}
	if (argc != 3) {
		printf("Le programme PGCD nécessite 2 paramètres");
		exit(-1);
	}
	unsigned int a = atoi(argv[1]);  // convertit du texte en nombre ou 0 si non interprétable
	unsigned int b = atoi(argv[2]);
	if ((a==0) || (b==0)) {
		printf("Le programme PGCD nécessite 2 entiers strictement positifs");
		exit(-1);
	}
	unsigned reste;
	do {
		reste = a % b;
		a = b;
		b = reste;
	} while (b!=0);

	printf("Le pgcd est %u\n", a);


}
