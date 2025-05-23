//
// Created by Matthias Roos on 23.05.25.
//

#include "Spieler.h"

Spieler::Spieler(string spitzName) {
    this->spitzName= spitzName;
}

string Spieler::getSpitzName() const {
    return spitzName;
}

void Spieler::addSpiele(OnlineSpiel spiel) {
    spiele.push_back(spiel);
}

void Spieler::readGames(string filename) {
    fstream file;
    file.open(filename, ios::in);
    if (file.is_open()) {
        cout << "File opened: " << endl;
        string name;
        int spieler;
        double punkte;
        while (!file.eof()) {
            file >> name;
            file >> spieler;
            file >> punkte;
            OnlineSpiel game(punkte, name, spieler);
            this->addSpiele(game);
        }
        cout << "Added games: " << this->spiele.size() << " added" << endl;
    } else {
        cout << "Error opening file: " << endl;
    }
    file.close();
}

double Spieler::punkteAb100() {
    double summe;
    for (int i = 0; i < spiele.size(); i++) {
        double points = spiele[i].getPunkte();
        if (points > 100) {
            summe += points;
        }
    }
    return summe;
}

void Spieler::zwanzigProzentBonus() {
    for (int i = 0; i < spiele.size(); i++) {
        double points = spiele[i].getPunkte();
        points = points + points * 0.2;
        spiele[i].setPunkte(points);
    }
}