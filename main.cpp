#include <iostream>
#include "odjeca.hpp"
#include "kamen.hpp"


using std::cout, std::cin, std::endl;
using std::string;



int main()
{/*
    cout << "Dobro došli u Zumkon" << endl
         << "Vaše pare su naše pare" << endl; 
     Proizvod p1("test", 1);
     Proizvod p2("test2");
     Proizvod p3;
     cout << p1.getIme() << " " << p1.getCijenaAsString() << endl;
     cout << p2.getIme() << " " << p2.getCijenaAsString() << endl;
     cout << p3.getIme() << " " << p3.getCijenaAsString() << endl;
     string unos;
     cin >> unos;
     p3.setIme(unos);
     float cijena;
     cin >> cijena;
     p3.setCijena(cijena);
     cout << p3.getIme() << " " << p3.getCijenaAsString() << endl;
     bool result = p3 == p1;
     cout << result;*/

   Odjeca o1("Test", 25, "P", "M");
    Odjeca o2("Test", 25, "P", "M");
    Odjeca o3("Test", 25, "P", "XM");
    
    Proizvod p1("test", 1);
    o1.info();
    o2.info();
    o3.info();
    bool o1o2 = o1 == o2;
    cout << o1o2 << endl;
    bool o1o3 = o1 == o3;
    cout << o1o3 << endl;


    return 0;
}
