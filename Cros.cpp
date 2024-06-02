#include <iostream>
#include "Cros.h"

Cros::Cros(double _timp): timp(_timp)
{
//    std::cout << "Constructor\n";
}

double Cros::getTimp() const {
    return timp;
}

double Cros::calculValoare() {
    if (timp < 30)
        return 10;
    return 120/timp;
}