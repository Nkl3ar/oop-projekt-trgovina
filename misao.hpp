template <typename T>
class Misao {
private:
    T misao;
public:
    Misao(T misao) : misao(misao){}
    Misao() : misao(""){}
    ~Misao(){}

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