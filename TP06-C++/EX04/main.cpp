#include "Permanent.hpp"
#include "Contractuel.hpp"
#include <iostream>
#include <vector>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {

    std::cout << "=== Systeme de Gestion d Employes (Polymorphisme) ===" << std::endl;

    std::vector<Employe*> entreprise;

    entreprise.push_back(new Permanent("Karim Alami", 101, 3500.0f, 1200.0f));
    entreprise.push_back(new Contractuel("Fatima Zahra", 102, 1800.0f, 6, 25.0f));
    entreprise.push_back(new Permanent("Youssef Tazi", 103, 4200.0f, 1500.0f));
    entreprise.push_back(new Contractuel("Aya Bennani", 104, 2000.0f, 12, 30.0f));

    std::cout << "\n--- Affichage des informations de tous les employes ---" << std::endl;
    for (const auto& emp : entreprise) {
        emp->afficherInfos();
    }

    std::cout << "\n--- Test specifique Contractuel ---" << std::endl;
    Contractuel* c = dynamic_cast<Contractuel*>(entreprise[1]);
    if (c != nullptr) {
        std::cout << "Salaire mensuel pour 160h de Fatima Zahra : "
                  << c->calculerSalaireMensuel(160) << " €" << std::endl;
    }

    std::cout << "\n--- Liberation de la memoire ---" << std::endl;
    for (auto& emp : entreprise) {
        delete emp;
    }
    entreprise.clear();

    return 0;
}
