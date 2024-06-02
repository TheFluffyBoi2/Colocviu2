#include <iostream>
#pragma once
#include <string>
#include "Proba.h"
#include <memory>

class Concurent {
private:
    std::string nume, prenume, data_nasterii;
    std::shared_ptr<Proba> proba;
public:
    Concurent();
    Concurent(std::string _nume, std::string _prenume, std::string _data_nasterii, std::shared_ptr<Proba> _proba);
    std::string getNume() const;
    std::string getPrenume() const;
    std::string getDataNasterii() const;
    std::shared_ptr<Proba> getProba() const;
    void setNume(std::string _nume);
    void setPrenume(std::string _prenume);
    void setDataNasterii(std::string _data_nasterii);
    void setProba(std::shared_ptr<Proba> _proba);
    friend std::ostream& operator<<(std::ostream& os, Concurent& c);
};
