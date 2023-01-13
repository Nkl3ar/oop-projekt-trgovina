#include <iostream>
using std::cout, std::cin, std::endl;
using std::string;


class Proizvod
{
private:
    string ime;
    float cijena;

public:
    Proizvod(string ime, float cijena) : ime(ime), cijena(cijena) {}
    Proizvod(string ime)
    {
        this->ime = ime;
        cijena = 0;
    }
    Proizvod() : Proizvod("", 0) {}

    bool operator==(Proizvod &p){
        if(cijena == p.getCijena())
            if(ime == p.getIme())
                return true;
        return false;
    }

    const string getIme()
    {
        return ime;
    }
    void setIme(string const ime)
    {
        this->ime = ime;
    }

    const float getCijena()
    {
        return cijena;
    }

    void setCijena(float const cijena)
    {
        this->cijena = cijena;
    }
};

int main()
{
    cout << "Dobro došli u Zumkon" << endl
         << "Vaše pare su naše pare" << endl;
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
    bool result = p3==p1;
    cout << result;
    return 0;
}
