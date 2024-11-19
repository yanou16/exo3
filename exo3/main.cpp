#include "Voiture.h"
#include "Moto.h"
#include "StationDeLavage.h"

int main() {
    
    Voiture voiture1;
    Voiture voiture2;
    Moto moto1;

    
    StationDeLavage station;

    
    station.ajouterVehicule(&voiture1);
    station.ajouterVehicule(&voiture2);
    station.ajouterVehicule(&moto1);

    
    std::cout << "Premi�re session de lavage :" << std::endl;
    station.lancerLavage();

    
    station.viderParc(); 
    Moto moto2;
    station.ajouterVehicule(&moto2);
    station.ajouterVehicule(&voiture2);
    station.ajouterVehicule(&moto1);

    
    std::cout << "\nDeuxi�me session de lavage (apr�s transformation) :" << std::endl;
    station.lancerLavage();

    return 0;
}
