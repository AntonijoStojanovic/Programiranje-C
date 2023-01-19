/*Perici je mama dala dzeparac za skolu, a on ga je odlucio potrositi na kolace u slasticarni.
Slasticarna nudi kolace razlicitih oblika,velicina i cijena.
Perica treba program u koji unosi iznos dzeparca,broj stranica,duljinu stranice, visinu kolaca(sve u cm) i cijenu jednog komada(u kn).
Program ispisuje koliko kolaca može kupiti i kolika je isplativost(koliko kuna plati za jedan cm^3 kolaca).

Broj stranica kolaca ne smije biti manji od 3. Duljina stranice moraju biti 0 ili veci. Ukoliko je unos krivi, ispisati "Krivi unos! Molim probajte opet." i cekati na novi unos.

Napomene: 
ukljuciti #include <math.h>
formula za volumen jednog kolaca: V=h*n*(a^2)*(cos(3.14/n)/sin(3.14/n))/4
isplativost=cijena jednog kolaca/volumen jednog kolaca

Autor zadatka: Josko Jurcevic, RAC, 18/19*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main() {

	int dzeparac, brojStranica, duljinaStranice, visinaKolaca, brojKolaca;
	double cijenaKomada, volumenKolaca, isplativost;



	scanf("%d %d %d %d %lf", &dzeparac, &brojStranica, &duljinaStranice, &visinaKolaca, &cijenaKomada);

	brojKolaca = dzeparac / cijenaKomada;
	volumenKolaca = (visinaKolaca * brojStranica) * (pow(duljinaStranice, 2)) * (cos(3.14 / brojStranica) / sin(3.14 / brojStranica)) / 4;
	isplativost = cijenaKomada / volumenKolaca;



	
	if (brojStranica < 3 || duljinaStranice < 0) {
		printf("Krivi unos! Molim probajte opet.\n");
		printf("Perica moze kupiti: %d kolaca, a platit ce %.2lfkn/cm^3.", brojKolaca, isplativost);
	}
	else {

		printf("Perica moze kupiti: %d kolaca, a platit ce %.2lfkn/cm^3.", brojKolaca, isplativost);
	}

	return 0;
}