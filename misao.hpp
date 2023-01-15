#include "osoba.hpp"

template <typename T>
class Misao {
private:
    T misao;
    Osoba* osoba;
public:
    Misao(T misao, Osoba* osoba) : misao(misao),osoba(osoba){}
    Misao(T misao) : Misao(misao,nullptr){}
    Misao() : Misao(""){}
    ~Misao(){}

    void info()
    {
        std::cout << "Misao: " << misao << std::endl;
        if(osoba!=nullptr)
        {
            std::cout << "Pripada osobi: " << std::endl;
            osoba->info();
        }
        else
            std::cout << "Ne pripada ikakvoj osobi." << std::endl;
    }

    void setOsoba(Osoba* osoba)
    {
        this->osoba=osoba;
    }
    Osoba* getOsoba()
    {
        return osoba;
    }
    T getMisao()
    {
        return misao;
    }
    void setMisao(T misao)
    {
        this->misao=misao;
    }
    bool operator==(Misao &m)
    {
        if(misao==m.getMisao())
            return true;
        return false;
    }
};