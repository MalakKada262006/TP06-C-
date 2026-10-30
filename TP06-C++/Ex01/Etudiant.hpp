#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include "Personne.hpp"

class Etudiant : public Personne {
private:
    std::string niveau;

public:
    Etudiant(const std::string& n, int a, const std::string& niv)
        : Personne(n, a), niveau(niv) {}

    void afficher() const override {
        Personne::afficher();
        std::cout << " | Niveau : " << niveau << std::endl;
    }
};

#endif
