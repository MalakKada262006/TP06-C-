#ifndef EMPLOYE_HPP
#define EMPLOYE_HPP

#include <string>
#include <iostream>

class Employe {
protected:
    std::string nom;
    int id;
    float salaireDeBase;

public:
    Employe(const std::string& nom, int id, float salaireDeBase);

    virtual ~Employe();

    // Méthode virtuelle d'affichage
    virtual void afficherInfos() const;
};

#endif
