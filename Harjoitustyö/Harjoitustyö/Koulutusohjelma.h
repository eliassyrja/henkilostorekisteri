#pragma once
#include <string>
#include <vector>
#include "Opettaja.h"
#include "Opiskelija.h"

using std::string; using std::vector;

class Koulutusohjelma
{
public:
	Koulutusohjelma();
	Koulutusohjelma(const string& nimi);
	~Koulutusohjelma();

	string annaNimi() const;
	void asetaNimi(const string& nimi);

	void lisaaOpettaja();
	void lisaaOpiskelija();
	void poistaOpettaja();
	void poistaOpiskelija();

	void tulostaOpettajat() const;
	void tulostaOpiskelijat() const;

private:

	string nimi_;

	vector <Opiskelija> opiskelijat_;
	vector <Opettaja> opettajat_;
};

