#include <iostream>

template <class T, class B>
void mixedInfo(T a, B b)
{
    try
    {
        a.info();
        b.info();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
