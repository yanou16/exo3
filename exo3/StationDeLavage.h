#ifndef STATIONDELAVAGE_H
#define STATIONDELAVAGE_H

#include <vector>
#include "Vehicule.h"

class StationDeLavage {
private:
    std::vector<Vehicule*> parc;

public:
    void ajouterVehicule(Vehicule* vehicule);
    void lancerLavage() const;
    void viderParc();
};

#endif 
#pragma once
