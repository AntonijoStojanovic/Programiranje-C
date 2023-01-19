/*Isprogramirajte jednostavni kalkulator!

Vaš kalkulator treba podržavati funkcije:

Zbrajanje
Oduzimanje
Množenje
Dijeljenje
Kvadriranje

Kalkulator treba raditi samo s cijelim brojevima.

Pogledajte test caseove za primjere rada kalkulatora. */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int prviBroj, drugiBroj, rezultat;
	char operator;

	scanf("%d%c", &prviBroj, &operator);

	

	switch (operator) {

	case '+':
		scanf("%d", &drugiBroj);
		rezultat = prviBroj + drugiBroj;
		printf("%d", rezultat);
		break;

	case '-':
		scanf("%d", &drugiBroj);
		rezultat = prviBroj - drugiBroj;
		printf("%d", rezultat);
		break;
	case '*':
		scanf("%d", &drugiBroj);
		rezultat = prviBroj * drugiBroj;
		printf("%d", rezultat);
		break;
	case '/':
		scanf("%d", &drugiBroj);
		rezultat = prviBroj / drugiBroj;
		printf("%d", rezultat);
		break;
	case 'K':
		rezultat = prviBroj * prviBroj;
		printf("%d", rezultat);
		break;

	default:
		printf("Pogresan unos");
		break;
	

	}

	return 0;
}