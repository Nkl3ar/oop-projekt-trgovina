
#include "kamen.hpp"
using std::cout, std::endl;
using std::string;

    float Kamen::validTezina(const float tezina)
    {
        if (tezina < 0)
            return 0;
        return tezina;
    }
    void Kamen::incrementKamenCount()
    {
        KamenCountStillExists++;
        KamenCount++;
    }

    Kamen::Kamen(Kamen &Kamen){
        ime = Kamen.getIme();
        cijena = Kamen.getCijena();
        tip = Kamen.getTip();
        tezina = Kamen.getTezina();

    }

    Kamen::Kamen(string ime, float cijena, string tip, float tezina) : Proizvod(ime, cijena), tip(tip), tezina(validTezina(tezina)) { incrementKamenCount(); }
    Kamen::Kamen(string ime, float cijena, float tezina) : Kamen(ime, cijena, "", tezina) {}
    Kamen::Kamen(string ime, float cijena, string tip) : Kamen(ime, cijena, tip, 0) {}
    Kamen::Kamen(string ime, float cijena) : Kamen(ime, cijena, "", 0) {}
    Kamen::Kamen(string ime) : Kamen(ime, 0, "", 0) {}
    Kamen::~Kamen()
    {
        KamenCountStillExists--;
    }

    const string Kamen::getTip()
    {
        return tip;
    }
    void Kamen::setTip(string tip)
    {
        this->tip = tip;
    }
    const float Kamen::getTezina()
    {
        return tezina;
    }
    void Kamen::setTezina(float tezina)
    {
        this->tezina = tezina;
    }
    void Kamen::info()
    {
        Proizvod::info();
        cout << "Tip: " << tip << endl;
        cout << "Tezina: " << tezina << endl;
    }
    bool Kamen::operator==(Kamen &k)
    {
    Cijena cijenaCompare = k.getCijena();
    if (cijena.vrijednost == cijenaCompare.vrijednost)
        if(cijena.valuta == cijena.valuta)
            if (ime == k.getIme())
                if (tip == k.getTip())
                    if (tezina == k.getTezina())
                        return true;
        return false;
    }

     const int Kamen::getCount()
    {
        return KamenCount;
    }
     const int Kamen::getExistCount()
    {
        return KamenCountStillExists;
    }

int Kamen::KamenCount = 0;
int Kamen::KamenCountStillExists = 0;