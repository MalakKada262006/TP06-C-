#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>
#include <iostream>

class Personne {
protected:
    std::string nom;
    int age;

public:
    Personne(const std::string& n, int a) : nom(n), age(a) {}

    virtual ~Personne() = default;

    virtual void afficher() const {
        std::cout << "Nom : " << nom << " | Age : " << age << " ans";
    }
};

#endif
