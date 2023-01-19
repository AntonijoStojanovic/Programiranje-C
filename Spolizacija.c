/*Spolizacija je proces u birokraciji kojim se na temelju JMBG broja gradana određuje kojeg je spola gradanin. Za Zagreb vrijedi sljedece pravilo kod JMBG brojeva: prvih 7 znamenki nastaje iz datuma rodenja, nakon toga 330 ako se radi o muskarcu, 335 ako se radi o zeni. Algoritam za zadnje 3 znamenke je u nasem slucaju nebitan, i recimo da su zadnje 3 znamenke proizvoljne. 

Primjer jednog JMBG-a muskarca rodenog na datum 04.07.2010.:
0407010330007 (test case 1)
Primjer jednog JMBG-a zene rođene na datum 12.03.1996.:
1203996335909 (test case 2)

Dodatno, spolizaciju obavlja tek referent pocetnik, te zbog ne snalaženja u poslu unosi JMBG znamenku po znamenku u svaki redak. Vasa je zadaca napisati program u kojem ce on unijeti znamenku po znamenku i po unosu svih 13 znamenki, program ispisuje „Muska osoba“ ukoliko se radi o muskarcu ili „Zenska osoba“ ukoliko se radi o zeni.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100
int main() {

	int jmbg[MAX];
	int i;
	int n = 13; //duljina JMBG-a

	for (i = 0; i < n; i++)
	{
		scanf("%d", &jmbg[i]);
	}

	if (jmbg[9] == 0) {
		printf("Musko!");

	}else if (jmbg[9] == 5) {
		printf("Zensko!");

	}
	else {
		printf("Greska!");
	}

	return 0;
}