/*Napisite program koji ucitava prirodni broj n. Program treba ispisati koliko ima prirodnih brojeva, strogo većih od 1, ciji kvadrat dijeli broj n.

Prenio u Grader: Mateo Drk, RAC 18/19*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
 

	int broj;

	scanf("%d", &broj);

	int brojac = 0;

	for (int i = 2; i * i <= broj; i++)
	{
		if (broj % (i * i) == 0)
		{
			brojac++;
		}
	}

	printf("%d", brojac);

	return 0;

}