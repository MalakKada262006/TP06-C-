#ifndef COMPTE_EPARGNE_HPP
#define COMPTE_EPARGNE_HPP

#include "Compte.hpp"

class CompteEpargne : public Compte {
private:
    double tauxInteret;

public:
    CompteEpargne(const std::string& num, double soldeInitial, double taux)
        : Compte(num, soldeInitial), tauxInteret(taux) {}

    void calculerInteret() {
        double interets = solde * (tauxInteret / 100.0);
        solde += interets;
        std::cout << "Interets calcules et ajoutes : " << interets << " € (Taux : " << tauxInteret << "%)" << std::endl;
    }

    void afficher() const override {
        Compte::afficher();
        std::cout << " | Taux d interet : " << tauxInteret << "%" << std::endl;
    }
};

#endif
