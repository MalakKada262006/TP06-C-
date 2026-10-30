#ifndef PRODUIT_ELECTRONIQUE_HPP
#define PRODUIT_ELECTRONIQUE_HPP

#include "Produit.hpp"

class ProduitElectronique : public Produit {
private:
    int garantieMois;

public:
    ProduitElectronique(const std::string& n, double p, int garantie);

    void afficherInfos() const override;
};

#endif
