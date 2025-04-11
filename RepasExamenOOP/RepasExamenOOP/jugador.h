#pragma once
// Jugador.hpp
#ifndef JUGADOR_H
#define JUGADOR_H

#include "Personaje.h"

class Jugador : public Personaje {
public:
    Jugador(string n) : Personaje(n, 100) {}

    void atacar() override {
        cout << nombre << " lanza una flecha!" << endl;
    }
};

#endif
