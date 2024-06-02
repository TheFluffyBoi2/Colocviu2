#include <iostream>
#include "Concurent.h"

Concurent::Concurent()
{
//    std::cout << "Constructor\n";
}

Concurent::Concurent(std::string _nume, std::string _prenume, std::string _data_nasterii,
                     std::shared_ptr<Proba> _proba):
                     nume(_nume),
                     prenume(_prenume),
                     data_nasterii(_data_nasterii),
                     proba(_proba)
                     {
    std::cout << "Constructor\n";
                     }

std::string Concurent::getNume() const {return nume;}
std::string Concurent::getPrenume() const {return prenume;}
std::string Concurent::getDataNasterii() const {return data_nasterii;}
std::shared_ptr<Proba> Concurent::getProba() const {return proba;}
void Concurent::setNume(std::string _nume) {nume = _nume;}
void Concurent::setPrenume(std::string _prenume) {prenume = _prenume;}
void Concurent::setDataNasterii(std::string _data_nasterii) {data_nasterii = _data_nasterii;}
void Concurent::setProba(std::shared_ptr<Proba> _proba) {proba = _proba;}

std::ostream& operator<<(std::ostream& os, Concurent& c)
{
    os << c.getNume() << " admis";
    return os;
}