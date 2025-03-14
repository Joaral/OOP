#include <iostream>

class Coche {
private:
	std::string marca;
	std::string modelo;
public:
	void setCoche() {
		std::cout << "Dame una marca de Coche\n";
		std::cin >> marca;
		std::cout << "Dame un modelo de Coche\n";
		std::cin >> modelo;
	}
	void getCoche(){
		std::cout << "Este Coche es de marca " << marca << " Y es del modelo " << modelo;
	}
};

void main() {
	Coche MiCoche;
	MiCoche.setCoche();
	MiCoche.getCoche();
}