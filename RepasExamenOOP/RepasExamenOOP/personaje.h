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

public:  // Métodos accesibles desde fuera de la clase
    Personaje(string n, int s) : nombre(n), salud(s) {}

    // Método público para atacar
    virtual void atacar() {
        cout << nombre << " realiza un ataque genérico." << endl;
    }

    // Método público para recibir daño, modificando la salud
    void recibirDanio(int danio) {
        salud -= danio;
        if (salud < 0) salud = 0;
        cout << nombre << " ha recibido " << danio << " de daño. Salud restante: " << salud << endl;
    }

    virtual ~Personaje() {}  // Destructor virtual para evitar fugas de memoria
};

#endif
