#include "osoba.hpp"

Osoba::Osoba(string ime, string prezime, int godina) : ime(ime), prezime(prezime), godina(godina) {}
Osoba::Osoba(string ime, string prezime) : Osoba(ime, prezime, 0) {}
Osoba::Osoba(string ime, int godina) : Osoba(ime, "", godina) {}
Osoba::Osoba(string ime) : Osoba(ime, "", 0) {}
Osoba::Osoba(int godina) : Osoba("", "", godina) {}
Osoba::Osoba() : Osoba("", "", 0) {}
string Osoba::getIme()
{
    return ime;
}
string Osoba::getPrezime()
{
    return prezime;
}
int Osoba::getGodina()
{
    return godina;
}
void Osoba::setIme(string ime)
{
    this->ime = ime;
}
void Osoba::setPrezime(string prezime)
{
    this->prezime = prezime;
}
void Osoba::setGodina(int godina)
{
    this->godina = godina;
}
void Osoba::info()
{
    std::cout << "Ime: " << ime << std::endl;
    std::cout << "Prezime: " << prezime << std::endl;
    std::cout << "Godina: " << godina << std::endl;
}