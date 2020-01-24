#include "Tyontekija.h"
#include <iostream>


using std::cout; using std::cin;

Tyontekija::Tyontekija() : Henkilo(), palkka_(), tunnus_()
{
}

Tyontekija::Tyontekija(const string& etunimi, const string& sukunimi, const string& osoite, const string& puhelinnumero, 
	double palkka, const string& tunnus) : Henkilo(etunimi, sukunimi, osoite, puhelinnumero), palkka_(palkka), tunnus_(tunnus)
{
}

Tyontekija::Tyontekija(const Tyontekija& alkup) : Henkilo(alkup), palkka_(alkup.palkka_), tunnus_(alkup.tunnus_)
{
}

Tyontekija::~Tyontekija()
{
}

Tyontekija& Tyontekija::operator=(const Tyontekija& tyont)
{
	if (this != &tyont) {
		Henkilo::operator=(tyont);
		palkka_ = tyont.palkka_;
		tunnus_ = tyont.tunnus_;
	}

	return *this;
}


double Tyontekija::annaPalkka() const
{
	return palkka_;
}

string Tyontekija::annaTunnus() const
{
	return tunnus_;
}

void Tyontekija::asetaPalkka(double palkka)
{
	palkka_ = palkka;
}

void Tyontekija::asetaTunnus(const string& tunnus)
{
	tunnus_ = tunnus;
}

void Tyontekija::tulosta() const
{
	Henkilo::tulosta();
	cout << palkka_ << " " << tunnus_ << " ";
}

void Tyontekija::kysyTiedot()
{
	string palkka;
	Henkilo::kysyTiedot();
	cout << "Anna palkka: ";
	getline(cin, palkka);
	palkka_ = atof(palkka.c_str());
	cout << "Anna tunnus: ";
	getline(cin, tunnus_);
}
