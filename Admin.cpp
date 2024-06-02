#include <iostream>
#include "Admin.h"
#include <memory>

const int Admin::codAdmin = 209;

std::vector<std::shared_ptr<Concurent>>& Admin::getConcurenti() {return concurenti;}

void Admin::sortConcurenti()
{
    for (int i = 0; i < concurenti.size(); i++)
        for (int j = i+1; j < concurenti.size(); j++)
            if (concurenti[i]->getProba()->calculValoare() < concurenti[j]->getProba()->calculValoare())
                std::swap(concurenti[i], concurenti[j]);
}