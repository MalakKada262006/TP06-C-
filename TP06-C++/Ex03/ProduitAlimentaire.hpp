#ifndef PRODUIT_ALIMENTAIRE_HPP
#define PRODUIT_ALIMENTAIRE_HPP

#include "Produit.hpp"

class ProduitAlimentaire : public Produit {
private:
    std::string dateExpiration;

public:
    // Constructeur
    ProduitAlimentaire(const std::string& n, double p, const std::string& dateExp);

    void afficherInfos() const override;
};

#endif
