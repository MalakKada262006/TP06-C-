#include "ProduitElectronique.hpp"

ProduitElectronique::ProduitElectronique(const std::string& n, double p, int garantie)
    : Produit(n, p), garantieMois(garantie) {}

void ProduitElectronique::afficherInfos() const {
    std::cout << "[Electronique] ";
    Produit::afficherInfos();
    std::cout << " | Garantie : " << garantieMois << " mois" << std::endl;
}
