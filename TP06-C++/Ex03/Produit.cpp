#include "Produit.hpp"

Produit::Produit(const std::string& n, double p) : nom(n), prix(p) {}

void Produit::afficherInfos() const {
    std::cout << "Produit : " << nom << " | Prix : " << prix << " €";
}
