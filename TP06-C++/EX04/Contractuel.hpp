#ifndef CONTRACTUEL_HPP
#define CONTRACTUEL_HPP

#include "Employe.hpp"

class Contractuel : public Employe {
private:
    int dureeContrat;
    float tauxHoraire;

public:
    Contractuel(const std::string& nom, int id, float salaireDeBase, int dureeContrat, float tauxHoraire);

    float calculerSalaireMensuel(int heures) const;

    void afficherInfos() const override;
};

#endif
