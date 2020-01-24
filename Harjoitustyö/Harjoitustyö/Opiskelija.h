#pragma once
#include "Henkilo.h"
class Opiskelija : public Henkilo
{
public:
	Opiskelija();
	Opiskelija(const string& etunimi, const string& sukunimi, const string& osoite, const string& puhelinnumero, 
		const string& opiskelijanumero);
	Opiskelija(const Opiskelija& alkup);
	~Opiskelija();

	Opiskelija& operator=(const Opiskelija& opisk);

	string annaOpiskelijanumero() const;
	void asetaOpiskelijanumero(const string& opiskelijanumero);

	void tulosta() const;
	void kysyTiedot();

private:
	string opiskelijanumero_;
};

