#include "gradjanin.hpp"

Gradjanin::Gradjanin(string ime,string prezime,int godina):Osoba(ime,prezime,godina){}
Gradjanin::Gradjanin(string ime,string prezime):Gradjanin(ime,prezime,0){}
Gradjanin::Gradjanin(string ime,int godina):Gradjanin(ime,"",godina){}
Gradjanin::Gradjanin(string ime):Gradjanin(ime,"",0){}
Gradjanin::Gradjanin(int godina):Gradjanin("","",godina){}
Gradjanin::Gradjanin():Gradjanin("","",0){}