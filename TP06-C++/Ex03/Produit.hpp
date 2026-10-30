#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <string>
#include <iostream>

class Produit {
protected:
    std::string nom;
    double prix;

public:
    Produit(const std::string& n, double p);

    virtual ~Produit() = default;


    virtual void afficherInfos() const;
};

#endif
