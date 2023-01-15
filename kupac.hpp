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
    virtual void kolikoGodinaZivotaPreostalo()
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
    virtual float sansaZaRodjendanskiPoklon()
    {
        if (godina > 30 && godina < 60)
            return 0.00001;
        if (godina > 0 && godina < 10)
            return 90;
        return abs((90 - godina));
    }
};