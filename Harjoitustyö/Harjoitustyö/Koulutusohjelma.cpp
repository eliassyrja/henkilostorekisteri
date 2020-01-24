#include "Koulutusohjelma.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;



Koulutusohjelma::Koulutusohjelma(): nimi_(), opiskelijat_(), opettajat_()
{
}

Koulutusohjelma::Koulutusohjelma(const string & nimi): nimi_(nimi), opiskelijat_(), opettajat_()
{
}


Koulutusohjelma::~Koulutusohjelma()
{
}

string Koulutusohjelma::annaNimi() const
{
	return nimi_;
}

void Koulutusohjelma::asetaNimi(const string & nimi)
{
	nimi_ = nimi;
}

void Koulutusohjelma::lisaaOpettaja()
{
	Opettaja temp;
	temp.kysyTiedot();
	opettajat_.push_back(temp);

}

void Koulutusohjelma::lisaaOpiskelija()
{
	Opiskelija temp;
	temp.kysyTiedot();
	opiskelijat_.push_back(temp);

}

void Koulutusohjelma::poistaOpettaja()
{
	string tunnus;
	cout << "Anna poistettavan opettajan tunnus: ";
	getline(cin, tunnus);

	if (tunnus.compare("X") == 0) {
		return;
	}

	for (unsigned int i = 0; i < opettajat_.size(); i++) {
		if (opettajat_[i].annaTunnus() == tunnus) {
			opettajat_.erase(opettajat_.begin() + i);
			return;
		}
		else
			cout << "Annetulla tunnuksella ei löydy opettajaa!" << endl;
	}
}

void Koulutusohjelma::poistaOpiskelija()
{
	string opnro;
	cout << "Anna poistettavan opiskelijan opiskelijanumero: ";
	getline(cin, opnro);

	if (opnro.compare("X") == 0) {
		return;
	}

	for (unsigned int i = 0; i < opiskelijat_.size(); i++) {
		if (opiskelijat_[i].annaOpiskelijanumero() == opnro) {
			opiskelijat_.erase(opiskelijat_.begin() + i);
			return;
		}
		else
			cout << "Annetulla opiskelijanumerolla ei löydy opettajaa!" << endl;
	}
}

void Koulutusohjelma::tulostaOpettajat() const
{
	for (unsigned int i = 0; i < opettajat_.size(); i++) {

		opettajat_[i].tulosta();
	}
}

void Koulutusohjelma::tulostaOpiskelijat() const
{
	for (unsigned int i = 0; i < opiskelijat_.size(); i++) {

		opiskelijat_[i].tulosta();
	}
}
