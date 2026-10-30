#include "Permanent.hpp"

Permanent::Permanent(const std::string& nom, int id, float salaireDeBase, float primeAnnuelle)
    : Employe(nom, id, salaireDeBase), primeAnnuelle(primeAnnuelle) {}

void Permanent::afficherInfos() const {
    std::cout << "[Employe Permanent] ";
    Employe::afficherInfos();
    std::cout << " | Prime annuelle : " << primeAnnuelle << " €" << std::endl;
}
