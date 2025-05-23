//
// Created by Matthias Roos on 23.05.25.
//

#ifndef ONLINESPIEL_H
#define ONLINESPIEL_H
#include "Spiel.h"

class OnlineSpiel : Spiel {
private:
    double punkte;
public:
    OnlineSpiel(double punkte, string name, int spieler);
    double getPunkte() const;
    void ausgeben() const override;
    friend ostream& operator<<(ostream& os, const OnlineSpiel& s);
    double setPunkte(double punkte);
};



#endif //ONLINESPIEL_H
