#include "Koulu.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;


Koulu::Koulu(): nimi_(), koulutusohjelmat_()
{
}

Koulu::Koulu(const string& nimi) : nimi_(nimi), koulutusohjelmat_()
{
}


Koulu::~Koulu()
{
}

void Koulu::lisaaKoulutusohjelma()
{
	string temp;
	cout << "Anna koulutusohjelman nimi: ";
	getline(cin, temp);

	if (temp.compare("X") == 0) {
		return;
	}

	koulutusohjelmat_.push_back(Koulutusohjelma(temp));
}

void Koulu::lisaaKoulutusohjelmaanOpettaja()
{
	while (1) {
		cout << "Mihin koulutusohjelmaan haluat lisata opettajan: ";
		string temp;
		getline(cin, temp);

		if (temp.compare("X") == 0) {
			return;
		}

		for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
			if (koulutusohjelmat_[i].annaNimi().compare(temp) == 0) {
				koulutusohjelmat_[i].lisaaOpettaja();
				return;
			}
		}
		cout << "Annettua ohjelmaa ei loytynyt." << endl;
	}
}

void Koulu::lisaaKoulutusohjelmaanOpiskelija()
{
	while (1) {
		cout << "Mihin koulutusohjelmaan haluat lisata opiskelijan: ";
		string temp;
		getline(cin, temp);

		if (temp.compare("X") == 0) {
			return;
		}

		for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
			if (koulutusohjelmat_[i].annaNimi().compare(temp) == 0) {
				koulutusohjelmat_[i].lisaaOpiskelija();
				return;
			}
		}
		cout << "Annettua ohjelmaa ei loytynyt." << endl;
	}
}

void Koulu::poistaKoulutusohjelmanOpettaja()
{
	while (1) {
		cout << "Minka koulutusohjelman opettajan haluat poistaa: ";
		string temp;
		getline(cin, temp);

		if (temp.compare("X") == 0) {
			return;
		}

		for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
			if (koulutusohjelmat_[i].annaNimi().compare(temp) == 0) {
				koulutusohjelmat_[i].poistaOpettaja();
				return;
			}
		}
		cout << "Annettua ohjelmaa ei loytynyt." << endl;
	}
}

void Koulu::poistaKoulutusohjelmanOpiskelija()
{
	while (1) {
		cout << "Minka koulutusohjelman opiskelijan haluat poistaa: ";
		string temp;
		getline(cin, temp);

		if (temp.compare("X") == 0) {
			return;
		}

		for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
			if (koulutusohjelmat_[i].annaNimi().compare(temp) == 0) {
				koulutusohjelmat_[i].poistaOpiskelija();
				return;
			}
		}
		cout << "Annettua ohjelmaa ei loytynyt." << endl;
	}
}

void Koulu::poistaKoulutusohjelma()
{
	while (1) {
		cout << "Minka koulutusohjelman haluat poistaa: ";
		string temp;
		getline(cin, temp);

		if (temp.compare("X") == 0) {
			return;
		}

		for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
			if (koulutusohjelmat_[i].annaNimi().compare(temp) == 0) {
				koulutusohjelmat_.erase(koulutusohjelmat_.begin() + i);
				return;
			}
		}
		cout << "Annettua ohjelmaa ei loytynyt." << endl;
	}
}

void Koulu::tulostaKoulutusohjelmat() const
{
	cout << "Kaikki koulutusohjelmat:" << endl;
	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
		cout << koulutusohjelmat_[i].annaNimi() << endl;
	}
}

void Koulu::tulostaKoulutusohjelmienMaara() const
{
	cout << "Koulutusohjelmien lkm.: ";
	cout << koulutusohjelmat_.size() << endl;
}

void Koulu::tulostaKoulutusohjelmanOpettajat() const
{
	while (1) {
		cout << "Minka koulutusohjelman opettajat haluat tulostaa: ";
		string temp;
		getline(cin, temp);

		if (temp.compare("X") == 0) {
			return;
		}

		for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
			if (koulutusohjelmat_[i].annaNimi().compare(temp) == 0) {
				koulutusohjelmat_[i].tulostaOpettajat();
				return;
			}
		}
		cout << "Annettua ohjelmaa ei loytynyt." << endl;
	}
}

void Koulu::tulostaKoulutusohjelmanOpiskelijat() const
{
	while (1) {
		cout << "Minka koulutusohjelman opiskelijat haluat tulostaa: ";
		string temp;
		getline(cin, temp);

		if (temp.compare("X") == 0) {
			return;
		}

		for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
			if (koulutusohjelmat_[i].annaNimi().compare(temp) == 0) {
				koulutusohjelmat_[i].tulostaOpiskelijat();
				return;
			}
		}
		cout << "Annettua ohjelmaa ei loytynyt." << endl;
	}
}
