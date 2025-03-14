#include <iostream>
#define OPTIONS_NUM 2
#define SCENES_NUM 3

class GameManager {
	Scenes* gameScene[SCENES_NUM];
	int actualScene;

public:
	void NewGame() {

	}
	void UpdateGame() {

	}
	void GameOver() {

	}

};

class Scenes {
protected:
	std::string sceneName;
	std::string description;
	std::string options[OPTIONS_NUM];
	int correctAnswer;
	int objectAnswer;
	int goAnswer;
public:
	virtual void PlayScene() = 0;
};

class Scene1 :public Scenes {
	void PlayScene() {
		std::cout << "Te Despiertas Agitado y a la vez cansado,\nmiras a tu alrededor y solo ves un oscuro horizonte que te rodea\nexcepto una fuerte luz blanca que te alumbra la cara.\n" << std::endl;
		std::cout << "Lo unico que recuerdas es que estabas paseando\ncon tu Mujer e hijo por el centro de la ciudad\ncelebrando el Festival de la paz\npero no consigues ver a tu familia por ningun lado.\n" << std::endl;
		std::cout << "De Repente se te aparece una silueta que te bloquea\nla luz blanca y se dirige a ti con una voz desgastada:\n";
		std::cout << "-Al fin despiertas, como te sientes?" << std::endl;
		std::cout << "1. Preguntar la ubicacion		2. Preguntar por tu familia		3. Ser sincero" << std::endl;

	}
};

class Scene2 :public Scenes {
	void PlayScene() {

	}
};

class Scene3 :public Scenes {
	void PlayScene() {

	}
};

class Object {
protected:
	std::string nameObject;
	std::string description;
public:
	virtual std::string GetInfo() = 0;
};

class Inventory {
	Object* objects[3];

public:
	void GetObject(Object objects[SCENES_NUM]) {

	}
	void showObjects() {

	}
};

void main() {

}