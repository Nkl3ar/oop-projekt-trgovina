#include "osoba.hpp"

class Gradjanin : public Osoba{
    public:
    
        Gradjanin(string,string,int);
        Gradjanin(string,string);
        Gradjanin(string,int);
        Gradjanin(string);
        Gradjanin(int);
        Gradjanin();
        virtual void kolikoGodinaZivotaPreostalo(){
            if(90-godina<=0)
            {
                std::cout << "Čudo je što ste živi, now die :)" << std::endl;
            }
            else
            {
                std::cout << "Imate još " << 90-godina << " godina života preostalo :)" << std::endl;
            }
            
        }
        virtual float sansaZaRodjendanskiPoklon(){
            if(godina>30 && godina<60)
                return 0.00001;
            if(godina>0 && godina<10)
                return 90;
            return abs((90-godina));
        }

};