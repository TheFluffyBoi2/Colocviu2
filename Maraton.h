#include <iostream>
#pragma once
#include "Proba.h"

class Maraton : public Proba{
private:
    double distanta;
public:
    Maraton(double _distanta);
    double getDistanta() const;
    double calculValoare() override;
};

