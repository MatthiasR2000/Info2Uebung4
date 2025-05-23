//
// Created by Matthias Roos on 23.05.25.
//

#ifndef SPIELER_H
#define SPIELER_H

#include "OnlineSpiel.h"
#include <fstream>

class Spieler {
private:
    string spitzName;
    vector<OnlineSpiel> spiele;
public:
    Spieler(string spitzName);
    string getSpitzName() const;
    void addSpiele(OnlineSpiel spiel);
    void readGames(string filename);
    double punkteAb100();
    void zwanzigProzentBonus();

};



#endif //SPIELER_H
