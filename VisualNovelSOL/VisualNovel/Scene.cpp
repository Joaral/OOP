#include "Scene.h"

Scene1::Scene1() {
	sceneName = "Primera Escena";
	description = "Te Despiertas Agitado y a la vez cansado,\nmiras a tu alrededor y solo ves un oscuro horizonte que te rodea\nexcepto una fuerte luz blanca que te alumbra la cara.\nLo unico que recuerdas es que estabas paseando\ncon tu Mujer e hijo por el centro de la ciudad\ncelebrando el Festival de la paz\npero no consigues ver a tu familia por ningun lado.\nDe Repente se te aparece una silueta que te bloquea\nla luz blanca y se dirige a ti con una voz desgastada:\n\n-Al fin despiertas, como te sientes?\n";

	options[0] = "Preguntar la ubicacion";
	options[1] = "Preguntar por tu familia";
	options[2] = "Golpear a la silueta";

	gameOverFeedback = "Game Over";

	correctAnswer = 1;
	objectAnswer = 1;
	goAnswer = 2;
}

Scene2::Scene2() {
	sceneName = "Segunda Escena";
	description = "";

	options[0];
	options[1];
	options[2];

	gameOverFeedback = "Game Over";

	correctAnswer;
	objectAnswer;
	goAnswer;
}

Scene3::Scene3() {
	sceneName = "Tercera Escena";
	description = "";

	options[0];
	options[1];
	options[2];

	gameOverFeedback = "Game Over";

	correctAnswer;
	objectAnswer;
	goAnswer;
}

void Scene1::PlayScene() {
	std::cout << "*****" << sceneName << "*****" << std::endl;
	std::cout << description << std::endl;
	for (int i = 0; i < OPTIONS_NUM; i++)
	{
		std::cout << "		" << i << "- " << options[i];
	}
	std::cout << std::endl;
}

void Scene2::PlayScene() {
	std::cout << "*****" << sceneName << "*****" << std::endl;
	std::cout << description << std::endl;
	for (int i = 0; i < OPTIONS_NUM; i++)
	{
		std::cout << "		" << i << "- " << options[i];
	}
	std::cout << std::endl;
}

void Scene3::PlayScene() {
	std::cout << "*****" << sceneName << "*****" << std::endl;
	std::cout << description << std::endl;
	for (int i = 0; i < OPTIONS_NUM; i++)
	{
		std::cout << "		" << i << "- " << options[i];
	}
	std::cout << std::endl;
}