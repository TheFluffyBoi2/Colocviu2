#include <iostream>
#include "Maraton.h"

Maraton::Maraton(double _distanta): distanta(_distanta)
{
//    std::cout << "Constructor\n";
}

double Maraton::getDistanta() const {
    return distanta;
}

double Maraton::calculValoare() {
    if (distanta > 50)
        return 10;
    return distanta/5;
}

