#pragma once
#include "Koulutusohjelma.h"

class Koulu
{
public:

	Koulu();
	Koulu(const string& nimi);
	~Koulu();
	
	void lisaaKoulutusohjelma();
	void lisaaKoulutusohjelmaanOpettaja();
	void lisaaKoulutusohjelmaanOpiskelija();
	void poistaKoulutusohjelmanOpettaja();
	void poistaKoulutusohjelmanOpiskelija();
	void poistaKoulutusohjelma();


	void tulostaKoulutusohjelmat() const;
	void tulostaKoulutusohjelmienMaara() const;
	void tulostaKoulutusohjelmanOpettajat() const;
	void tulostaKoulutusohjelmanOpiskelijat() const;

private:

	string nimi_;
	vector <Koulutusohjelma> koulutusohjelmat_;
};

