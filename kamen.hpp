
#include "proizvod.hpp"
using std::string;

class Kamen : public Proizvod
{
private:
    float validTezina(const float);

    static void incrementKamenCount();

    static int KamenCount;
    static int KamenCountStillExists;

protected:
    string tip;
    float tezina;

public:
    Kamen(string, float, string, float);
    Kamen(string, float, float);
    Kamen(string, float, string);
    Kamen(string, float);
    Kamen(string);
    Kamen(Kamen &);
    ~Kamen();
    const string getTip();
    void setTip(string);
    const float getTezina();
    void setTezina(float);
    void info();
    bool operator==(Kamen &);
    static const int getCount();
    static const int getExistCount();
};