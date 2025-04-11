// Enemigo.hpp
#ifndef ENEMIGO_H
#define ENEMIGO_H

#include "Personaje.h"

class Enemigo : public Personaje {
public:
    Enemigo(string n) : Personaje(n, 80) {}

    void atacar() override {
        cout << nombre << " muerde con furia!" << endl;
    }
};

#endif
#pragma once
