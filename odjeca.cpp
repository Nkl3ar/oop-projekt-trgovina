#include "odjeca.hpp"

using std::cout, std::endl;
using std::string;

string Odjeca::validVelicina(string velicina)
{
    if (velicina.length() == 0)
        return "M";
    for (int x = 0; x < velicina.length(); x++)
        velicina[x] = (toupper(velicina[x]));

    char validVelicine[] = {'S', 'M', 'L'};
    for (int x = 0; x < 3; x++)
    {
        if (velicina.at(velicina.length() - 1) == validVelicine[x])
        {
            for (int i = 0; i < velicina.length() - 2; i++)
            {
                if (velicina.at(i) != 'X')
                    return "M";
            };
            return velicina;
        }
    }

    return "M";
}

void Odjeca::incrementOdjecaCount()
{
    OdjecaCountStillExists++;
    OdjecaCount++;
}

Odjeca::Odjeca(string ime, float cijena, string tip, string velicina) : Proizvod(ime, cijena), tip(tip), velicina(validVelicina(velicina)) { incrementOdjecaCount(); }
Odjeca::Odjeca(string ime, float cijena, string tip) : Odjeca(ime, cijena, tip, "") {}
Odjeca::Odjeca(string ime, float cijena) : Odjeca(ime, cijena, "", "") {}
Odjeca::Odjeca(string ime) : Odjeca(ime, 0, "", "") {}
Odjeca::Odjeca(Odjeca &o)
{
    ime = o.getIme();
    cijena = o.getCijena();
    tip = o.getTip();
    velicina = o.getVelicina();
    incrementOdjecaCount();
}
Odjeca::~Odjeca()
{
    OdjecaCountStillExists--;
}

const string Odjeca::getTip()
{
    return tip;
}
void Odjeca::setTip(string tip)
{
    this->tip = tip;
}
const string Odjeca::getVelicina()
{
    return velicina;
}
void Odjeca::setVelicina(string velicina)
{
    this->velicina = validVelicina(velicina);
}
void Odjeca::info()
{
    Proizvod::info();
    cout << "Tip: " << tip << endl;
    cout << "Velicina: " << velicina << endl;
}
bool Odjeca::operator==(Odjeca &o)
{
    Cijena cijenaCompare = o.getCijena();
    if (cijena.vrijednost == cijenaCompare.vrijednost)
        if (cijena.valuta == cijena.valuta)
            if (ime == o.getIme())
                if (tip == o.getTip())
                    if (velicina == o.getVelicina())
                        return true;
    return false;
}

const int Odjeca::getCount()
{
    return OdjecaCount;
}
const int Odjeca::getExistCount()
{
    return OdjecaCountStillExists;
}

int Odjeca::OdjecaCount = 0;
int Odjeca::OdjecaCountStillExists = 0;