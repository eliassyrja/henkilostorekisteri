#pragma once
#include "Tyontekija.h"
class Opettaja : public Tyontekija
{
public:
	Opettaja();
	Opettaja(const string& etunimi, const string& sukunimi, const string& osoite, const string& puhelinnumero,
		double palkka, const string& tunnus, const string& opetusala);
	Opettaja(const Opettaja& alkup);
	~Opettaja();

	Opettaja& operator=(const Opettaja& opett);

	string annaOpetusala() const;
	void asetaOpetusala(const string& opetusala);

	void tulosta() const;
	void kysyTiedot();

private:

	string opetusala_;
};

