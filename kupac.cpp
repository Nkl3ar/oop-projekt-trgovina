#include "kupac.hpp"

Kupac::Kupac(string ime,string prezime,int godina):Osoba(ime,prezime,godina){}
Kupac::Kupac(string ime,string prezime):Kupac(ime,prezime,0){}
Kupac::Kupac(string ime,int godina):Kupac(ime,"",godina){}
Kupac::Kupac(string ime):Kupac(ime,"",0){}
Kupac::Kupac(int godina):Kupac("","",godina){}
Kupac::Kupac():Kupac("","",0){}


        void Kupac::isprazniKosaricu(){
            kosarica.clear();
        }
        void Kupac::dodajUKosaricu(Proizvod* p){
            if(p!=nullptr)
                kosarica.push_back(p);
            
        }
        void Kupac::ispisiKosaricu()
        {
            for (Proizvod* n : kosarica)
                std::cout << n->getIme() << " ";
            std::cout << std::endl;
        }