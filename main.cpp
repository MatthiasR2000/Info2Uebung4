#include "Spiel.h"
#include "Spieler.h"

int main() {
    Spieler spieler1("OOP-Guru");
    spieler1.readGames("myGames.dat");
    cout << spieler1.punkteAb100() << endl;
    return 0;
}

