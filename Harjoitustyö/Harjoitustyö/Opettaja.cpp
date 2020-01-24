#include "Opettaja.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;

Opettaja::Opettaja() : Tyontekija(), opetusala_()
{
}

Opettaja::Opettaja(const string& etunimi, const string& sukunimi, const string& osoite, const string& puhelinnumero, 
	double palkka, const string& tunnus, const string& opetusala) : 
	Tyontekija(etunimi, sukunimi,osoite,puhelinnumero, palkka, tunnus), opetusala_(opetusala)
{
}

Opettaja::Opettaja(const Opettaja& alkup) : Tyontekija(alkup), opetusala_(alkup.opetusala_)
{
}

Opettaja::~Opettaja()
{
}

Opettaja& Opettaja::operator=(const Opettaja& opett)
{
	if (this != &opett) {
		Tyontekija::operator=(opett);
		opetusala_ = opett.opetusala_;
	}

	return *this;
}


string Opettaja::annaOpetusala() const
{
	return opetusala_;
}

void Opettaja::asetaOpetusala(const string& opetusala)
{
	opetusala_ = opetusala;
}

void Opettaja::tulosta() const
{
	Tyontekija::tulosta();
	cout << opetusala_ << endl;
}

void Opettaja::kysyTiedot()
{
	Tyontekija::kysyTiedot();
	cout << "Anna opetusala: ";
	getline(cin, opetusala_);
}
