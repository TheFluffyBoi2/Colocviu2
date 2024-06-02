#include <iostream>
#include "Sprint.h"

Sprint::Sprint(double _timp): timp(_timp)
{
//    std::cout << "Constructor\n";
}

double Sprint::getTimp() const {
    return timp;
}

double Sprint::calculValoare() {
    if (timp < 10)
        return 10;
    return 90/timp;
}