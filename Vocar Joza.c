/* Joza ima plantazu na kojoj uzgaja i prodaje razlicite citruse (mandarine, narance, limune, limete i grejp). Podatke i statistiku o ubranom i prodanom vocu dugo godina biljezio je i spremao u papirnatu arhivu, te se ove godine odlucio modernizirati i unajmio vas kao strucnjaka koji ce mu isprogramirati aplikaciju koja biljezi koliko je voca prikupljeno, a koliko prodano u odredenim vremenskim periodima.

Program koji Joza zeli koristiti treba mu omoguciti unos i izracun podataka za odredeni vremenski period (npr. 1 tjedan, 4 tjedna, itd.) tako da moze napraviti statistiku koliko je prikupio, a koliko prodao citrusa u tom periodu.

U test caseovima vidjeti primjere izvodenja programa.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100


int main() {

	int brojTjedana, i;
	//mandarine, narance, limune, limete i grejp
	int prikupljeneMandarine[MAX], prikupljeneNarance[MAX], prikupljeniLimuni[MAX], prikupljeneLimete[MAX], prikupljeniGrejp[MAX];
	int prodaneMandarine[MAX], prodaneNarance[MAX], prodaniLimuni[MAX], prodaneLimete[MAX], prodaniGrejp[MAX];

	int ukupneprikupljeneMandarine = 0;
	int ukupneprodaneMandarine = 0;

	int ukupneprikupljeneNarance = 0;
	int ukupneprodaneNarance = 0;

	int ukupniprikupljeniLimuni = 0;
	int ukupniprodaniLimuni = 0;

	int ukupneprikupljeneLimete = 0;
	int ukupneprodaneLimete = 0;

	int ukupniprikupljeniGrejp = 0;
	int ukupniprodaniGrejp = 0;





	//printf("Unesite broj tjedana: "); 
	scanf("%d", &brojTjedana);

	for (i = 0; i < brojTjedana; i++) {
		//printf("Unesi prikupljeno voce: ");
		scanf("%d %d %d %d %d", &prikupljeneMandarine[i], &prikupljeneNarance[i], &prikupljeniLimuni[i], &prikupljeneLimete[i], &prikupljeniGrejp[i]);

		//printf("Unesi prodano voce: ");
		scanf("%d %d %d %d %d", &prodaneMandarine[i], &prodaneNarance[i], &prodaniLimuni[i], &prodaneLimete[i], &prodaniGrejp[i]);

		ukupneprikupljeneMandarine += prikupljeneMandarine[i];
		ukupneprodaneMandarine += prodaneMandarine[i];

		ukupneprikupljeneNarance += prikupljeneNarance[i];
		ukupneprodaneNarance += prodaneNarance[i];

		ukupniprikupljeniLimuni += prikupljeniLimuni[i];
		ukupniprodaniLimuni += prodaniLimuni[i];

		ukupneprikupljeneLimete += prikupljeneLimete[i];
		ukupneprodaneLimete += prodaneLimete[i];

		ukupniprikupljeniGrejp += prikupljeniGrejp[i];
		ukupniprodaniGrejp += prodaniGrejp[i];



	}
	printf("Kroz %d. tjedan/tjedna\n\n", brojTjedana);

	printf("prikupljeno je: \n%d mandarina, %d naranca, %d limuna, %d limeta i %d grejpa\n\n", ukupneprikupljeneMandarine, ukupneprikupljeneNarance, ukupniprikupljeniLimuni, ukupneprikupljeneLimete, ukupniprikupljeniGrejp);

	printf("a prodano je: \n%d mandarine, %d narance, %d limuna, %d limeta i %d grejpa", ukupneprodaneMandarine, ukupneprodaneNarance, ukupniprodaniLimuni, ukupneprodaneLimete, ukupniprodaniGrejp);


	return 0;
}