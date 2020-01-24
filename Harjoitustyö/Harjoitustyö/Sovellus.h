#pragma once

#include "Koulu.h"

class Sovellus
{
public:
	Sovellus();
	Sovellus(const string& koulu);
	~Sovellus();

	string annaNimi() const;
	void asetaNimi(const string& nimi);
	void aja();
	string valikko() const;
	
private:
	string nimi_;
};

