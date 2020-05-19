/*
 * lecture.c
 *
 *  Created on: 19 mai 2020
 *      Author: Matthias
 */

#include <stdio.h>
#include <string.h>

int main() {
	char ligne[255];
	gets(ligne);
	printf("Ligne lue <%s>\n", ligne);
}

