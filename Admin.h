#include <iostream>
#pragma once
#include "Concurent.h"
#include <vector>
#include <memory>
#include "Cros.h"
#include "Maraton.h"
#include "SemiMaraton.h"
#include "Sprint.h"

class Admin {
private:
    std::vector<std::shared_ptr<Concurent>> concurenti;
    const static int codAdmin;
public:
    std::vector<std::shared_ptr<Concurent>>& getConcurenti();
    void sortConcurenti();
    const int getCod() {return codAdmin;}
};
