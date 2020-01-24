#pragma once
#include "Henkilo.h"
class Tyontekija : public Henkilo
{
public:
	Tyontekija();
	Tyontekija(const string& etunimi, const string& sukunimi, const string& osoite, const string& puhelinnumero,
		double palkka, const string& tunnus);
	Tyontekija(const Tyontekija& alkup);
	~Tyontekija();

	Tyontekija& operator=(const Tyontekija& tyont);

	double annaPalkka() const;
	string annaTunnus() const;

	void asetaPalkka(double palkka);
	void asetaTunnus(const string& tunnus);

	void tulosta() const;
	void kysyTiedot();

private:
	double palkka_;
	string tunnus_;
};

