#include "StationDeLavage.h"

void StationDeLavage::ajouterVehicule(Vehicule* vehicule) {
    parc.push_back(vehicule);
}

void StationDeLavage::lancerLavage() const {
    for (const auto& vehicule : parc) {
        vehicule->laver();
    }
}

void StationDeLavage::viderParc() {
    parc.clear();
}
