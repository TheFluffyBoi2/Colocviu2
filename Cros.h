#include <iostream>
#pragma once
#include "Proba.h"

class Cros : public Proba{
private:
    double timp;
public:
    Cros(double _timp);
    double getTimp() const;
    double calculValoare() override;
};
