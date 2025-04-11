// main.cpp
#include <iostream>
#include <vector>
#include "Jugador.h"
#include "Enemigo.h"

int main() {
    vector<Personaje*> personajes;

    personajes.push_back(new Jugador("Link"));
    personajes.push_back(new Enemigo("Murciélago"));
    personajes.push_back(new Jugador("Zelda"));
    personajes.push_back(new Enemigo("Goblin"));

    // Simulamos un combate donde atacan y reciben daño
    for (Personaje* p : personajes) {
        p->atacar();  // El método atacar es polimórfico
    }

    // Recibir daño
    personajes[0]->recibirDanio(30);  // Link recibe 30 de daño
    personajes[1]->recibirDanio(20);  // Murciélago recibe 20 de daño

    // Liberar memoria
    for (Personaje* p : personajes) {
        delete p;
    }

    return 0;
}
