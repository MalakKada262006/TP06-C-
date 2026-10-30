#include "ProduitAlimentaire.hpp"

ProduitAlimentaire::ProduitAlimentaire(const std::string& n, double p, const std::string& dateExp)
    : Produit(n, p), dateExpiration(dateExp) {}

void ProduitAlimentaire::afficherInfos() const {
    std::cout << "[Alimentaire] ";
    Produit::afficherInfos();
    std::cout << " | Date d expiration : " << dateExpiration << std::endl;
}
