
#include "proizvod.hpp"
#include <cmath>
#include <sstream>
#include <iomanip>
#include "iznimkamorapostojati.hpp"

using std::cout, std::endl;
using std::string;

int Proizvod::ProizvodCount = 0;
int Proizvod::ProizvodCountStillExists = 0;

Cijena Proizvod::validCijena(const Cijena cijena)
{
    if (cijena.vrijednost < 0)
    {
        throw std::underflow_error("Cijena ne smije biti manja od 0.");
        // Cijena valid = {0, cijena.valuta};
        // return valid;
    }
    return cijena;
}

void Proizvod::incrementProizvodCount()
{
    ProizvodCount++;
    ProizvodCountStillExists++;
}

Proizvod::Proizvod(string ime, Cijena cijena) : ime(ime), cijena(validCijena(cijena))
{
    incrementProizvodCount();
}

Proizvod::Proizvod(string ime, float vrijednost, string valuta) : Proizvod(ime, {vrijednost, valuta}) {}
Proizvod::Proizvod(string ime, float vrijednost) : Proizvod(ime, {vrijednost, "EUR"}) {}

Proizvod::Proizvod(string ime)
{
    this->ime = ime;
    cijena = {0, "EUR"};
    incrementProizvodCount();
}
Proizvod::Proizvod() : Proizvod("", {0, "EUR"}) {}

Proizvod::Proizvod(Proizvod *p)
{
    if (p != nullptr)
    {
        ime = p->getIme();
        cijena = p->getCijena();
        incrementProizvodCount();
    }
    else
    {
        throw IznimkaMoraPostojati();
    }
}

Proizvod::Proizvod(Proizvod &p)
{
    ime = p.getIme();
    cijena = p.getCijena();
}

Proizvod::~Proizvod()
{
    ProizvodCountStillExists--;
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

const Cijena Proizvod::getCijena()
{
    return cijena;
}

const string Proizvod::getCijenaAsString()
{

    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << floor(cijena.vrijednost * 100.0) / 100.0;
    string assemble = stream.str() + " " + cijena.valuta;
    return assemble;
}

void Proizvod::setCijena(const Cijena cijena)
{
    this->cijena = validCijena(cijena);
}

void Proizvod::setCijena(const float vrijednost)
{
    this->cijena = validCijena({vrijednost, cijena.valuta});
}

void Proizvod::setCijena(const float vrijednost, const string valuta)
{
    this->cijena = validCijena({vrijednost, valuta});
}

bool Proizvod::operator==(Proizvod &p)
{
    Cijena cijenaCompare = p.getCijena();
    if (cijena.vrijednost == cijenaCompare.vrijednost)
        if (cijena.valuta == cijena.valuta)
            if (ime == p.getIme())
                return true;
    return false;
}

void Proizvod::info()
{
    cout << "Ime: " << ime << endl;
    cout << "Cijena: " << getCijenaAsString() << endl;
}