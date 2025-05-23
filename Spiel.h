//
// Created by Matthias Roos on 23.05.25.
//

#ifndef SPIEL_H
#define SPIEL_H

#include <vector>
#include <iostream>
using namespace std;

class Spiel {
protected:
    string name;
    int spieler;
public:
    Spiel(string name, int spieler);
    virtual void ausgeben() const;
    string getName() const;
    int getSpieler() const;
};



#endif //SPIEL_H
