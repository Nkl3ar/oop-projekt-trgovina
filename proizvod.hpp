#include <iostream>
#include "cijena.hpp"
#pragma once

using std::string;

class Proizvod{

private:
    Cijena validCijena(const Cijena cijena);

    static void incrementProizvodCount();

    static int ProizvodCount;
    static int ProizvodCountStillExists;

protected:
    string ime;
    Cijena cijena;

public:
    Proizvod(string, Cijena);
    Proizvod(string, float, string);
    Proizvod(string, float);
    Proizvod(string);
    Proizvod(Proizvod*);
    Proizvod(Proizvod&);
    Proizvod();
    ~Proizvod();
    static const int getCount();
    static const int getExistCount();
    const string getIme();
    void setIme(const string);
    const Cijena getCijena();
    const string getCijenaAsString();
    void setCijena(const float);
    void setCijena(const float, const string);
    void setCijena(const Cijena);
    bool operator==(Proizvod &);
    void info();
};