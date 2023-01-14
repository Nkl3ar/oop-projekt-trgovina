#include <iostream>
#include "proizvod.hpp"
using std::cout, std::cin, std::endl;
using std::string;



class Kamen : public Proizvod
{
private:
    float validTezina(const float tezina)
    {
        if (tezina < 0)
            return 0;
        return tezina;
    }
    static void incrementKamenCount()
    {
        KamenCountStillExists++;
        KamenCount++;
    }
    static int KamenCount;
    static int KamenCountStillExists;

protected:
    string tip;
    float tezina;

public:
    Kamen(string ime, float cijena, string tip, float tezina) : Proizvod(ime, cijena), tip(tip), tezina(validTezina(tezina)) { incrementKamenCount(); }
    Kamen(string ime, float cijena, float tezina) : Kamen(ime, cijena, "", tezina) {}
    Kamen(string ime, float cijena, string tip) : Kamen(ime, cijena, tip, 0) {}
    Kamen(string ime, float cijena) : Kamen(ime, cijena, "", 0) {}
    Kamen(string ime) : Kamen(ime, 0, "", 0) {}
    ~Kamen()
    {
        Proizvod::~Proizvod();
        cout << "Kamen destroyed (⌐ ͡■ ͜ʖ ͡■)" << endl;
        KamenCountStillExists--;
    }

    const string getTip()
    {
        return tip;
    }
    void setTip(string tip)
    {
        this->tip = tip;
    }
    const float getTezina()
    {
        return tezina;
    }
    void setTezina(float tezina)
    {
        this->tezina = tezina;
    }
    void info()
    {
        Proizvod::info();
        cout << "Tip: " << tip << endl;
        cout << "Tezina: " << tezina << endl;
    }
    bool operator==(Kamen &k)
    {
        if (cijena == k.getCijena())
            if (ime == k.getIme())
                if (tip == k.getTip())
                    if (tezina == k.getTezina())
                        return true;
        return false;
    }

    static const int getCount()
    {
        return KamenCount;
    }
    static const int getExistCount()
    {
        return KamenCountStillExists;
    }
};

int Proizvod::ProizvodCount = 0;
int Proizvod::ProizvodCountStillExists = 0;

int Kamen::KamenCount = 0;
int Kamen::KamenCountStillExists = 0;

int main()
{
    cout << "Dobro došli u Zumkon" << endl
         << "Vaše pare su naše pare" << endl; /*
     Proizvod p1("test", 1);
     Proizvod p2("test2");
     Proizvod p3;
     cout << p1.getIme() << " " << p1.getCijena() << endl;
     cout << p2.getIme() << " " << p2.getCijena() << endl;
     cout << p3.getIme() << " " << p3.getCijena() << endl;
     string unos;
     cin >> unos;
     p3.setIme(unos);
     float cijena;
     cin >> cijena;
     p3.setCijena(cijena);
     cout << p3.getIme() << " " << p3.getCijena() << endl;
     bool result = p3 == p1;
     cout << result;*/

    Kamen k1("Test", 25, "P", -1.1);
    Kamen k2("Test", 20, "P", -1.1);
    Kamen k3("Test", 25, "P", -1.1);
    Proizvod p1("test", 1);
    k1.info();
    bool k1k2 = k1 == k2;
    cout << k1k2 << endl;
    bool k1k3 = k1 == k3;
    cout << k1k3 << endl;

    cout << "p1.getCount()" << p1.getCount() << endl;
    cout << "p1.getExistCount()" << p1.getExistCount() << endl;
    cout << "k3.getExistCount()" << k1.getExistCount() << endl;
    cout << "k3.getCount()" << k1.getCount() << endl;

    return 0;
}
