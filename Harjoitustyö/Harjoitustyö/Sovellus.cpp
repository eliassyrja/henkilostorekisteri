#include <iostream>
#include "Sovellus.h"

using std::endl;  using std::cout; using std::cin; using std::getline;
Sovellus::Sovellus()
{
}

Sovellus::Sovellus(const string& koulu):nimi_(koulu)
{
}

Sovellus::~Sovellus()
{
}

string Sovellus::annaNimi() const
{
	return nimi_;
}

void Sovellus::asetaNimi(const string& nimi)
{
	nimi_ = nimi;
}

void pause() {
	system("@echo off");
	system("echo Paina jotakin jatkaaksesi...");
	system("pause > nu1");
	system("cls");
}

void Sovellus::aja()
{
	Koulu amk(nimi_);
	cout << "Tervetuloa " << nimi_ << "-rekisteriin!" << endl;
	string valinta;

	do {
		valinta = valikko();
		if (valinta == "1") {
			amk.lisaaKoulutusohjelma();
			pause();
		}
		else if (valinta == "2") {
			amk.tulostaKoulutusohjelmat();
			pause();
		}
		else if (valinta == "3") {
			amk.tulostaKoulutusohjelmienMaara();
			pause();
		}
		else if (valinta == "4") {
			amk.tulostaKoulutusohjelmat();
			amk.lisaaKoulutusohjelmaanOpettaja();
			pause();
		}
		else if (valinta == "5") {
			amk.tulostaKoulutusohjelmat();
			amk.tulostaKoulutusohjelmanOpettajat();
			pause();
		}
		else if (valinta == "6") {
			amk.tulostaKoulutusohjelmat();
			amk.lisaaKoulutusohjelmaanOpiskelija();
			pause();
		}
		else if (valinta == "7") {
			amk.tulostaKoulutusohjelmat();
			amk.tulostaKoulutusohjelmanOpiskelijat();
			pause();
		}
		else if (valinta == "8") {
			amk.tulostaKoulutusohjelmat();
			amk.poistaKoulutusohjelma();
			pause();
		}
		else if (valinta == "9") {
			amk.tulostaKoulutusohjelmat();
			amk.poistaKoulutusohjelmanOpettaja();
			pause();
		}
		else if (valinta == "10") {
			amk.tulostaKoulutusohjelmat();
			amk.poistaKoulutusohjelmanOpiskelija();
			pause();
		}
		/*else if (valinta == "11") {
			cout << "Ei viel\x84 toimintoa!!" << endl;
			pause();
			//TODO PAIVITA KOULUTUSOHJELMAN NIMI
		}
		else if (valinta == "12") {
			cout << "Ei viel\x84 toimintoa!!" << endl;
			pause();
			//TODO PAIVITA OPETTAJAN TIEDOT
		}
		else if (valinta == "13") {
			cout << "Ei viel\x84 toimintoa!!" << endl;
			pause();
			//TODO PAIVITA OPISKELIJAN TIEDOT
		}
		else if (valinta == "14") {
			cout << "Ei viel\x84 toimintoa!!" << endl;
			pause();
			//TODO LUE TIEDOT
		}
		else if (valinta == "15") {
			cout << "Ei viel\x84 toimintoa!!" << endl;
			pause();
			//TODO TALLENNA TIEDOT
		} */
		else if (valinta == "0") {
			cout << "N\x84kemiin!" << endl;
			pause();
		}
		else {
			cout << "V\x84\x84r\x84 syote" << endl;
			pause();
		}



	} while (valinta != "0");

}

string Sovellus::valikko() const
{
	cout << "1) Lis\x84\x84 koulutusohjelma" << endl;
	cout << "2) Tulosta koulutusohjelmien nimet" << endl;
	cout << "3) Tulosta koulutusohjelmien m\x84\x84r\x84" << endl;
	cout << "4) Lis\x84\x84 koulutusohjelmaan opettaja" << endl;
	cout << "5) Tulosta koulutusohjelman opettajat" << endl;
	cout << "6) Lis\x84\x84 koulutusohjelmaan opiskelija" << endl;
	cout << "7) Tulosta koulutusohjelman opiskelijat" << endl;
	cout << "8) Poista koulutusohjelma" << endl;
	cout << "9) Poista opettaja" << endl;
	cout << "10) Poista opiskelija" << endl;
	/*cout << "11) P\x84ivit\x84 koulutusohjelman nimi" << endl;
	cout << "12) P\x84ivit\x84 opettajan tiedot" << endl;
	cout << "13) P\x84ivit\x84 opiskelijan tiedot" << endl;
	cout << "14) Lue tiedot" << endl;
	cout << "15) Tallenna tiedot" << endl; */
	cout << "0) Lopeta" << endl;
	cout << endl;

	string syote;
	cout << "Anna valintasi: ";
	getline(cin, syote);
	return syote;
}
