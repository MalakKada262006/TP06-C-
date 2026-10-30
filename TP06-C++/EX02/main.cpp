#include "CompteEpargne.hpp"
#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {

    std::cout << "=== Test de CompteEpargne (Heritage) ===" << std::endl;

    CompteEpargne monCompteEpargne("CE-987654", 1000.0, 3.5);

    monCompteEpargne.afficher();

    std::cout << "\n--- Test des operations ---" << std::endl;
    monCompteEpargne.deposer(500.0);
    monCompteEpargne.retirer(200.0);

    std::cout << "\n--- Test du calcul des interets ---" << std::endl;
    monCompteEpargne.calculerInteret();

    std::cout << "\n--- Etat final du compte ---" << std::endl;
    monCompteEpargne.afficher();

    return 0;
}
