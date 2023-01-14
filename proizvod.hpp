#include <iostream>
using std::string;

class Proizvod
{

private:
    double validCijena(const float);

    static void incrementProizvodCount();

    static int ProizvodCount;
    static int ProizvodCountStillExists;

protected:
    string ime;
    float cijena;

public:
    Proizvod(string, float);
    Proizvod(string);
    Proizvod();
    ~Proizvod();
    static const int getCount();
    static const int getExistCount();
    const string getIme();
    void setIme(const string);
    const float getCijena();
    void setCijena(const float);
    bool operator==(Proizvod &);
    void info();
};