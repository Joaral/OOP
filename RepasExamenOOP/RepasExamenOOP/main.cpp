// main.cpp
#include <iostream>
#include <vector>
#include "Jugador.h"
#include "Enemigo.h"

int main() {
    vector<Personaje*> personajes;

    personajes.push_back(new Jugador("Link"));
    personajes.push_back(new Enemigo("Murci�lago"));
    personajes.push_back(new Jugador("Zelda"));
    personajes.push_back(new Enemigo("Goblin"));

    // Simulamos un combate donde atacan y reciben da�o
    for (Personaje* p : personajes) {
        p->atacar();  // El m�todo atacar es polim�rfico
    }

    // Recibir da�o
    personajes[0]->recibirDanio(30);  // Link recibe 30 de da�o
    personajes[1]->recibirDanio(20);  // Murci�lago recibe 20 de da�o

    // Liberar memoria
    for (Personaje* p : personajes) {
        delete p;
    }

    return 0;
}
