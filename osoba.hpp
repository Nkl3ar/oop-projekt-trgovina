// #pragma once
#ifndef OSOBA_H
#define OSOBA_H

#include <iostream>
using std::string;

class Osoba
{
protected:
    string ime;
    string prezime;
    int godina;

public:
    Osoba(string, string, int);
    Osoba(string, string);
    Osoba(string, int);
    Osoba(string);
    Osoba(int);
    Osoba();
    string getIme();
    string getPrezime();
    int getGodina();
    void setIme(string);
    void setPrezime(string);
    void setGodina(int);
    void info();
    virtual void kolikoGodinaZivotaPreostalo() = 0;
    virtual float sansaZaRodjendanskiPoklon()
    {
        return abs((90 - godina));
    }
};

#endif