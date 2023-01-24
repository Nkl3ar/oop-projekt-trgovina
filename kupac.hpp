#include "osoba.hpp"
#include <vector>
#include "proizvod.hpp"

using namespace std;

class Kupac : public Osoba
{
private:
    std::vector<Proizvod *> kosarica;

public:
    Kupac(string, string, int);
    Kupac(string, string);
    Kupac(string, int);
    Kupac(string);
    Kupac(int);
    Kupac();
    void isprazniKosaricu();
    void dodajUKosaricu(Proizvod *);
    void ispisiKosaricu();
    virtual void kolikoGodinaZivotaPreostalo() override;
    virtual float sansaZaRodjendanskiPoklon() override;
};