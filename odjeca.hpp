#include "proizvod.hpp"

using std::string;

class Odjeca : public Proizvod
{
private:
    string validVelicina(string);
    static void incrementOdjecaCount();
    static int OdjecaCount;
    static int OdjecaCountStillExists;

protected:
    string tip;
    string velicina;

public:
    Odjeca(string, float, string, string);
    Odjeca(string, float, string);
    Odjeca(string, float);
    Odjeca(string);
    Odjeca(Odjeca&);
    ~Odjeca();

    const string getTip();
    void setTip(string);
    const string getVelicina();
    void setVelicina(string);
    void info();
    bool operator==(Odjeca &);
    static const int getCount();
    static const int getExistCount();
};
