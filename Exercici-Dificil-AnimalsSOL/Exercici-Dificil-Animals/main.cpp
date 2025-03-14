#include <iostream>

class Animal {
protected:
	std::string especie;
public:
	virtual void Hablar() = 0;
};

class Gato:public Animal {
	void Hablar() override {
		std::cout << "El Gato hace ¡MIAU!" << std::endl;
	}
public:
	Gato() {
		especie = "GATO";
	}
	~Gato() {
		std::cout << "El gato dice adios." << std::endl;
	}
};
class Perro :public Animal {
	void Hablar() override {
		std::cout << "El Perro hace ¡GUAU!" << std::endl;
	}
public:
	Perro() {
		especie = "PERRO";
	}
	~Perro() {
		std::cout << "El perro dice adios." << std::endl;
	}
};

class Mapache :public Animal {
	void Hablar() override {
		std::cout << "El Mapache hace ¡dkjighfvh!" << std::endl;
	}
public:
	Mapache() {
		especie = "MAPACHE";
	}
	~Mapache() {
		std::cout << "El mapache dice adios." << std::endl;
	}
};

void main() {
	Animal* misAnimales[3] = { new Gato(), new Perro(), new Mapache() };
	for (int i = 0; i < 3; i++) {
	misAnimales[i]->Hablar();
	delete misAnimales[i];
	}
}