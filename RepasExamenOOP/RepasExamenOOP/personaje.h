#pragma once
// Personaje.hpp
#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
using namespace std;

class Personaje {
protected:  // Atributos que pueden ser accedidos por las clases derivadas
    string nombre;
    int salud;

public:  // M�todos accesibles desde fuera de la clase
    Personaje(string n, int s) : nombre(n), salud(s) {}

    // M�todo p�blico para atacar
    virtual void atacar() {
        cout << nombre << " realiza un ataque gen�rico." << endl;
    }

    // M�todo p�blico para recibir da�o, modificando la salud
    void recibirDanio(int danio) {
        salud -= danio;
        if (salud < 0) salud = 0;
        cout << nombre << " ha recibido " << danio << " de da�o. Salud restante: " << salud << endl;
    }

    virtual ~Personaje() {}  // Destructor virtual para evitar fugas de memoria
};

#endif
