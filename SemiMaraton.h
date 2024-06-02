#include <iostream>
#pragma once
#include "Proba.h"

class SemiMaraton : public Proba {
private:
    double distanta;
public:
    SemiMaraton(double _distanta);
    double getDistanta() const;
    double calculValoare() override;
};
