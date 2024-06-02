#include <iostream>
#include "SemiMaraton.h"

SemiMaraton::SemiMaraton(double _distanta): distanta(_distanta)
{
//    std::cout << "Constructor\n";
}

double SemiMaraton::getDistanta() const {
    return distanta;
}

double SemiMaraton::calculValoare() {
    if (distanta > 50)
        return 10;
    return distanta/5;
}