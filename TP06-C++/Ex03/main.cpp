#include "ProduitAlimentaire.hpp"
#include "ProduitElectronique.hpp"
#include <iostream>
#include <vector>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {

    std::cout << "=== Test de la hiérarchie de produits (Polymorphisme) ===" << std::endl;

    std::vector<Produit*> catalogue;

    catalogue.push_back(new ProduitAlimentaire("Lait demi-ecreme", 1.20, "15/06/2026"));
    catalogue.push_back(new ProduitElectronique("Smartphone", 699.99, 24));
    catalogue.push_back(new ProduitAlimentaire("Yaourt nature", 0.85, "28/05/2026"));
    catalogue.push_back(new ProduitElectronique("Casque Bluetooth", 89.50, 12));

    for (const auto& prod : catalogue) {
        prod->afficherInfos();
    }

    for (auto& prod : catalogue) {
        delete prod;
    }
    catalogue.clear();

    return 0;
}
