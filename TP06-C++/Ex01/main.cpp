#include "Etudiant.hpp"
#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    std::cout << "=== Test de l heritage (Personne / Etudiant) ===" << std::endl;

    Etudiant etu("Mehdi Bennani", 21, "1ere annee Cycle Ingenieur");

    etu.afficher();

    return 0;
}
