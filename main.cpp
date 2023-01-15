#include <iostream>

using std::cout, std::cin, std::endl;
using std::string;

#include "odjeca.hpp"
#include "kamen.hpp"
#include "gradjanin.hpp"
#include "misao.hpp"

int main()
{
    cout << "Dobro došli u Zumkon" << endl
         << "Vaše pare su naše pare" << endl;
    Proizvod p1("Jana", 500);
    Proizvod p2(&p1);
    if (p1 == p2)
    {
        cout << "p1 i p2 su isti" << endl;
    };
    Cijena cijenaKarla = {0.56, "HRK"};
    Proizvod p3("Karlo", cijenaKarla);
    if (p1 == p3)
    {
        cout << "p1 i p3 su isti" << endl;
    };
    cout << "Info o Jani" << endl;
    p2.info();
    cout << "Info o Karlu" << endl;
    p3.info();

    p3.setIme("Jana s okusom Hmelja");
    p3.setCijena(20);

    p1.setCijena({0.10, "USD"});

    cout << "Info o Jani" << endl;
    p1.info();
    cout << "Info o Jani 2" << endl;
    p2.info();
    cout << "Info o bivšem Karlu" << endl;
    p3.info();

    cout << "Broj proizvoda: " << p1.getCount();

    Kamen k1("Kamen", 25.2, "Mokar");
    Kamen k2(k1);
    Kamen k3("Kamen2", 20);
    if (k1 == k2)
    {
        cout << "k1 i k2 su isti" << endl;
    };if (k1 == k3)
    {
        cout << "k1 i k3 su isti" << endl;
    };
    cout << "Info o Kamenu" << endl;
    k1.info();
    cout << "Info o Kamenu" << endl;
    k2.info();
    cout << "Info o Kamenu2" << endl;
    k3.info();
    cout << "Kamen cijena: " << k1.getCijenaAsString() << endl;

    Odjeca o1("Crna majica",20.25,"Majica", "M");
    Odjeca o2(o1);
    Odjeca o3("Crna majica",20.25,"Majica");
    if (o1 == o2)
    {
        cout << "o1 i o2 su isti" << endl;
    };if (o1 == o3)
    {
        cout << "o1 i o3 su isti" << endl;
    };
    o1.info();
    o2.info();
    o3.info();
    std::cout << "OdjecaCount:" << o1.getCount() << endl;
    std::cout << "KamenCount:" << k1.getCount() << endl;
    std::cout << "ProizvodCount:" << p1.getCount() << endl;

    Gradjanin g1("Ivo","Sanader",70);
    g1.info();
    std::cout << "Šansa za rođendanski poklon: " << g1.sansaZaRodjendanskiPoklon() << "%" << std::endl;
    g1.kolikoGodinaZivotaPreostalo();
    Misao m1("Prodaj Inu",&g1);
    m1.info();
    
    
    



    return 0;
}
