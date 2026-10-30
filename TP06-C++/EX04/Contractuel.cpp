#include "Contractuel.hpp"

Contractuel::Contractuel(const std::string& nom, int id, float salaireDeBase, int dureeContrat, float tauxHoraire)
    : Employe(nom, id, salaireDeBase), dureeContrat(dureeContrat), tauxHoraire(tauxHoraire) {}

float Contractuel::calculerSalaireMensuel(int heures) const {
    return heures * tauxHoraire;
}

void Contractuel::afficherInfos() const {
    std::cout << "[Employe Contractuel] ";
    Employe::afficherInfos();
    std::cout << " | Duree du contrat : " << dureeContrat << " mois | Taux horaire : " << tauxHoraire << " €/h" << std::endl;
}
