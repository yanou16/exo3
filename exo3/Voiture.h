#ifndef VOITURE_H
#define VOITURE_H

#include "Vehicule.h"

class Voiture : public Vehicule {
public:
    void laver() const override;
};

#endif 
#pragma once
