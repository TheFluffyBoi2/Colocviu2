#include <iostream>
#include "Meniu.h"
#include <string>
#include <memory>
#include "Concurent.h"
#include "Cros.h"
#include "Maraton.h"
#include "Sprint.h"
#include "SemiMaraton.h"
#include "Admin.h"

Meniu::Meniu() {
//    std::cout << "Constructor\n";
}
bool w = true;
void Meniu::start() {
    std::shared_ptr<Admin> admin = std::make_shared<Admin>();
    while (w) {
        int decizie;
        std::cout << "Intrati intr-un cont de concurent sau admin\n";
        std::cout << "Concurent (1)\n";
        std::cout << "Admin (2)\n";
        std::cout << "Quit (3)\n";
        std::cout << "Decizie: ";
        std::cin >> decizie;
        std::shared_ptr<Concurent> c = nullptr;
        switch (decizie) {
            case 1: {
                std::string nume, prenume, data_nasterii;
                std::shared_ptr<Proba> proba;
                std::cout << "Introduce-ti numele: ";
                std::cin >> nume;
                std::cout << "Introduce-ti prenumele: ";
                std::cin >> prenume;
                std::cin.get();
                std::cout << "Introduce-ti data nasterii: ";
                getline(std::cin, data_nasterii);
                std::cout << "Introduce-ti numarul corespunzator probei la care doriti sa participati:\n";
                std::cout << "Cros (1)\n";
                std::cout << "Sprint (2)\n";
                std::cout << "Maraton (3)\n";
                std::cout << "Semi-maraton (4)\n";
                int decizie2;
                std::cin >> decizie2;
                switch (decizie2) {
                    case 1:
                        std::cout << "Introduce-ti cel mai mic timp obtinut pana in prezent (in secunde):\n ";
                        std::cout << "Timp: ";
                        double timp;
                        std::cin >> timp;
                        proba = std::make_shared<Cros>(timp);
                        c = std::make_shared<Concurent>(nume, prenume, data_nasterii, proba);
                        admin->getConcurenti().push_back(c);
//                        for (auto& it : admin->getConcurenti())
//                            std::cout << *it;
                        break;
                    case 2:
                        std::cout << "Introduce-ti cel mai mic timp obtinut pana in prezent (in secunde):\n ";
                        std::cout << "Timp: ";
                        double timp2;
                        std::cin >> timp2;
                        proba = std::make_shared<Sprint>(timp2);
                        c = std::make_shared<Concurent>(nume, prenume, data_nasterii, proba);
                        admin->getConcurenti().push_back(c);
//                        for (auto& it : admin->getConcurenti())
//                            std::cout << *it;
                        break;
                    case 3:
                        std::cout << "Introduce-ti cea mai lunga distanta parcursa (in kilometrii):\n ";
                        std::cout << "Distanta: ";
                        double distanta;
                        std::cin >> distanta;
                        proba = std::make_shared<Maraton>(distanta);
                        c = std::make_shared<Concurent>(nume, prenume, data_nasterii, proba);
                        admin->getConcurenti().push_back(c);
//                        for (auto& it : admin->getConcurenti())
//                            std::cout << *it;
                        break;
                    case 4:
                        std::cout << "Introduce-ti cea mai lunga distanta parcursa (in kilometrii):\n ";
                        std::cout << "Distanta: ";
                        double distanta2;
                        std::cin >> distanta2;
                        proba = std::make_shared<SemiMaraton>(distanta2);
                        c = std::make_shared<Concurent>(nume, prenume, data_nasterii, proba);
                        admin->getConcurenti().push_back(c);
//                        for (auto& it : admin->getConcurenti())
//                            std::cout << *it;
                        break;
                    default:
                        std::cout << "Introduce-ti o optiune valida";
                        break;
                }
                break;
            }
            case 2: {
                std::cout << "Introduce-ti codul adminului: ";
                unsigned int cod;
                std::cin >> cod;
                if (cod != admin->getCod()) {
                    std::cout << "Cod incorect";
                    break;
                }
                std::cout << "Doriti sa incheiati inscrierile?\n";
                std::cout << "Da (1)\n";
                std::cout << "Nu (2)\n";
                unsigned int decizie3;
                std::cin >> decizie3;
                switch (decizie3) {
                    case 1: {
                        admin->sortConcurenti();
                        unsigned int cnt = 0;
                        std::cout << "Concurentii admisni: \n";
                        for (auto &it: admin->getConcurenti()) {
                            if (cnt > 500)
                                break;
                            cnt++;
                            std::cout << *it;
                        }
                        break;
                    }
                    case 2:
                        break;
                }
                break;
            }
            case 3:
            {
                w = false;
                break;
            }
            default:
                std::cout << "Introduceti o optiune valida";
        }
    }
}
