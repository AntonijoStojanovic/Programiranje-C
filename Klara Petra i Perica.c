/*Srednjoskolke Klara i Petra vole se dopisivati preko maaaaaliiih papirica za vrijeme nastave, jer su mobiteli zabranjeni. Medutim, kako ne sjede zajedno u klupi jer Klara sjedi u drugom redu do prozora, a Petra u cetvrtom redu do zida osmislile su posebnu tajnu abecedu za dopisivanje putem papirica. Kada napisu poruku uvijek ju salju preko nekoliko ljudi u razredu, pa tako i preko Perice.

Pericu jako zanima oko cega se Petra i Klara dopisuju te je na temelju par poruka uspio desifrirati tajnu abecedu, ali bi volio da mu vi pomognete napisati program koji ce brzinski prevesti poruku kad mu dospije u ruke kako Klara i Petra ne bi skuzile da ju Perica cita.

Perica je primijetio da:

Jedna poruka se uvijek sastoji od 10 brojeva
Svaki broj u poruci je zapravo slovo engleske abecede: 1 je A, 2 je B… Z je 26
Ukoliko je 10. broj 0, onda to zapravo znaci da na kraju poruke pise „KRAJ PORUKE!
Ukoliko na kraju poruke ne pise broj 0 onda znači da slijedi papiric s ostatkom teksta koji je vezan uz prethodnu poruku

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

int main() {

	int Poruka[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) {
		scanf("%d", &Poruka[i]);
	}
	if (Poruka[SIZE - 1] != 0) {
		for (int i = 0; i < SIZE; i++) {
			printf("%c ", (Poruka[i] + 64));
		}
	}
	else {
		for (int i = 0; i < SIZE - 1; i++) {
			printf("%c ", (Poruka[i] + 64));
		}
		printf("\nKRAJ PORUKE!");
	}



	return 0;
}