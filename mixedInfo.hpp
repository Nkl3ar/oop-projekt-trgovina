#include <iostream>

template <class T, class B>
void mixedInfo(T a, B b)
{
    a.info();
    b.info();
}
