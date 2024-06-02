#include <iostream>
#pragma once
#include "Proba.h"

class Sprint : public Proba{
private:
    double timp;
public:
    Sprint(double _timp);
    double getTimp() const;
    double calculValoare() override;
};
