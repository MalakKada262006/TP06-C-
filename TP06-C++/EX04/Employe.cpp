#include "Employe.hpp"

Employe::Employe(const std::string& nom, int id, float salaireDeBase)
    : nom(nom), id(id), salaireDeBase(salaireDeBase) {}

Employe::~Employe() {

}

void Employe::afficherInfos() const {
    std::cout << "ID : " << id << " | Nom : " << nom << " | Salaire de base : " << salaireDeBase << " €";
}
