#include <iostream>

using std::cout, std::cin, std::endl;
using std::string;

#include "odjeca.hpp"
#include "kamen.hpp"

int main()
{
    cout << "Dobro došli u Zumkon" << endl
         << "Vaše pare su naše pare" << endl; 
    Proizvod p1("Jana",500);
    Proizvod p2(&p1);
    if (p1 == p2)
    {
        cout << "p1 i p2 su isti" << endl;
    };
    Cijena cijenaKarla = {0.56,"HRK"};
    Proizvod p3("Karlo",cijenaKarla);
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

    p1.setCijena({0.10,"USD"});

    
    cout << "Info o Jani" << endl;
    p1.info();
    cout << "Info o Jani 2" << endl;
    p2.info();
    cout << "Info o bivšem Karlu" << endl;
    p3.info();

    cout << "Broj proizvoda: " << p1.getCount();

    

    return 0;
}
