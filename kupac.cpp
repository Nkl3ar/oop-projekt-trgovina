#include "kupac.hpp"
#include "iznimkamorapostojati.hpp"

Kupac::Kupac(string ime, string prezime, int godina) : Osoba(ime, prezime, godina) {}
Kupac::Kupac(string ime, string prezime) : Kupac(ime, prezime, 0) {}
Kupac::Kupac(string ime, int godina) : Kupac(ime, "", godina) {}
Kupac::Kupac(string ime) : Kupac(ime, "", 0) {}
Kupac::Kupac(int godina) : Kupac("", "", godina) {}
Kupac::Kupac() : Kupac("", "", 0) {}

void Kupac::isprazniKosaricu()
{
    kosarica.clear();
}
void Kupac::dodajUKosaricu(Proizvod *p)
{
    if (p != nullptr)
    {
        kosarica.push_back(p);
    }

    else
    {
        throw IznimkaMoraPostojati();
    }
}
void Kupac::ispisiKosaricu()
{
    for (Proizvod *n : kosarica)
        std::cout << n->getIme() << " ";
    std::cout << std::endl;
}
float Kupac::sansaZaRodjendanskiPoklon()
    {
        if (godina > 30 && godina < 60)
            return 0.00001;
        if (godina > 0 && godina < 10)
            return 90;
        return abs((90 - godina));
    }

void Kupac::kolikoGodinaZivotaPreostalo() 
    {
        if (90 - godina <= 0)
        {
            std::cout << "Čudo je što ste živi :)" << std::endl;
        }
        else
        {
            std::cout << "Imate još " << 90 - godina << " godina života preostalo :)" << std::endl;
        }
    }