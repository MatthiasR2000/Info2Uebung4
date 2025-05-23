//
// Created by Matthias Roos on 23.05.25.
//

#include "OnlineSpiel.h"

OnlineSpiel::OnlineSpiel(double punkte, string name, int spieler) : Spiel(name, spieler){
    this->punkte = punkte;
}

double OnlineSpiel::getPunkte() const {
    return punkte;
}

void OnlineSpiel::ausgeben() const {
    cout << "Spielname: " << this->name << endl;
    cout << "Spieler: " << this->spieler << endl;
}

ostream& operator<<(ostream& os, const OnlineSpiel& spiel) {
    os << "Spiel: " << spiel.getPunkte() << endl;
    os << "Anzahl Spieler: " << spiel.getSpieler();
    os << "Punkte: " << spiel.getPunkte() << endl;
    return os;
}

double OnlineSpiel::setPunkte(double punkte) {
    this->punkte = punkte;
}
