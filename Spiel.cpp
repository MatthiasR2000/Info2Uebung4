//
// Created by Matthias Roos on 23.05.25.
//

#include "Spiel.h"

Spiel::Spiel(string name, int spieler) {
    this->name = name;
    this->spieler = spieler;
}

void Spiel::ausgeben() const {
    cout << "Spielname: " << this->name << endl;
    cout << "Spieler: " << this->spieler << endl;
}

string Spiel::getName() const {
    return name;
}

int Spiel::getSpieler() const {
    return spieler;
}