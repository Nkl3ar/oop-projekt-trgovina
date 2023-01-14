#include <iostream>
#include "proizvod.hpp"
using std::cout, std::endl;
using std::string;

int Proizvod::ProizvodCount = 0;
int Proizvod::ProizvodCountStillExists = 0;

double Proizvod::validCijena(const float cijena)
{
    if (cijena < 0)
        return 0;
    return cijena;
}

void Proizvod::incrementProizvodCount()
{
    ProizvodCount++;
    ProizvodCountStillExists++;
}

Proizvod::Proizvod(string ime, float cijena) : ime(ime), cijena(validCijena(cijena))
{
    incrementProizvodCount();
}
Proizvod::Proizvod(string ime)
{
    this->ime = ime;
    cijena = 0;
    incrementProizvodCount();
}
Proizvod::Proizvod() : Proizvod("", 0) {}
Proizvod::~Proizvod()
{
    ProizvodCountStillExists--;
    cout << "Proizvod destroyed (⌐ ͡■ ͜ʖ ͡■)" << endl;
}

const int Proizvod::getCount()
{
    return ProizvodCount;
}
const int Proizvod::getExistCount()
{
    return ProizvodCountStillExists;
}

const string Proizvod::getIme()
{
    return ime;
}

void Proizvod::setIme(const string ime)
{
    this->ime = ime;
}

const float Proizvod::getCijena()
{
    return cijena;
}

void Proizvod::setCijena(const float cijena)
{
    this->cijena = validCijena(cijena);
}

bool Proizvod::operator==(Proizvod &p)
{
    if (cijena == p.getCijena())
        if (ime == p.getIme())
            return true;
    return false;
}

void Proizvod::info()
{
    cout << "Ime: " << ime << endl;
    cout << "Cijena: " << cijena << endl;
}