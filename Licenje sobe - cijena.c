/*
Napisite C program koji racuna cijenu za licenje prostorije visine V metara, sirine S metara i duljine D metara, ako se jedan metar kvadratni naplacuje 10,40 kn. 
Potrebno je uzeti u obzir da se u prostoriji ne lice podovi i vrata visine 0,75*V (75% visine prostorije) i sirine A i dva prozora dimenzija 0,1*Vx0,1*S (10% visine i sirine prostorije). 

V,S,D i A su pozitivni realni brojevi koje unosi korisnik.
U slucaju pogresnih unosa dimenzija, ispisati odgovarajuce poruke ( "Dimenzija mora biti pozitivna!" ili "Vrata moraju stati u prostoriju!").

Nakon ispravnih unosa potrebno je ispisati konacnu cijenu licenja u obliku:
Konacna cijena je: __ kuna i ___lipa.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	
	double Visina, Sirina, Duljina, SirinaVrata;
	double Vrata;
	double Prozori;
	double PovrsinaSobe;
	double Cijena;
	double Zid1, Zid2, Strop;
	
	float Kune, Lipe;

	
	
	scanf("%lf %lf %lf %lf", &Visina, &Sirina, &Duljina, &SirinaVrata);

	Vrata = (0.75 * Visina) * SirinaVrata;
	Prozori = 2 * ((0.1 * Visina)* (0.1 * Sirina));
	Zid1 = (Sirina * Visina) * 2;
	Zid2 = (Duljina * Visina) * 2;
	Strop = (Duljina * Sirina);
	
	PovrsinaSobe = ((Zid1 + Zid2) + Strop) - (Vrata - Prozori);
	Cijena = (PovrsinaSobe) * 10.40;
	Kune = Cijena;
	Lipe = (Cijena - (int)Cijena) * 100;
	

	if (Visina < 0 || Sirina < 0 || Duljina < 0 || SirinaVrata < 0 ) {
		
		printf("Dimenzija mora biti pozitivna!");
	}
	else if (SirinaVrata > Sirina){

		printf("Vrata moraju stati u prostoriju!");
	}
	else {
		printf("Konacna cijena je: %.f kuna i %.f lipa", Kune,Lipe);
	}
	

	return 0;
}