#ifndef PERMANENT_HPP
#define PERMANENT_HPP

#include "Employe.hpp"

class Permanent : public Employe {
private:
    float primeAnnuelle;

public:
    Permanent(const std::string& nom, int id, float salaireDeBase, float primeAnnuelle);

    void afficherInfos() const override;
};

#endif
