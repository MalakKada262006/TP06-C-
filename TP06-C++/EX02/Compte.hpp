#ifndef COMPTE_HPP
#define COMPTE_HPP

#include <string>
#include <iostream>

class Compte {
protected:
    std::string numero;
    double solde;

public:
    Compte(const std::string& num, double soldeInitial)
        : numero(num), solde(soldeInitial) {}

    virtual ~Compte() = default;

    virtual void deposer(double montant) {
        if (montant > 0) {
            solde += montant;
            std::cout << "Depot de " << montant << " effectue sur le compte " << numero << std::endl;
        } else {
            std::cerr << "Montant de depot invalide." << std::endl;
        }
    }

    virtual void retirer(double montant) {
        if (montant > 0 && montant <= solde) {
            solde -= montant;
            std::cout << "Retrait de " << montant << " effectue sur le compte " << numero << std::endl;
        } else {
            std::cerr << "Retrait impossible (fonds insuffisants ou montant invalide)." << std::endl;
        }
    }

    virtual void afficher() const {
        std::cout << "Compte n° " << numero << " | Solde : " << solde << " €";
    }
};

#endif
