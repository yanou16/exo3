#ifndef VEHICULE_H
#define VEHICULE_H

#include <iostream>

class Vehicule {
public:
    virtual ~Vehicule() = default; 
    virtual void laver() const = 0; 
};

#endif 
#pragma once
