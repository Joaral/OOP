#include "GameManager.h"

GameManager::GameManager()
{
	actualScene = 0;
}



void GameManager::Question() {
	std::cout << ">>";
	std::cin >> playerAnswer;
}

void GameManager::NewGame() {
	gameScene[0] = new Scene1();
	gameScene[1] = new Scene2();
	gameScene[2] = new Scene3();
}

void GameManager::UpdateGame() {
	while (actualScene = SCENE_NUM) {
		actualScene = 0;
		NewGame();
		gameScene[actualScene]->PlayScene();
		Question();
		if (playerAnswer == gameScene[actualScene]->getObjectAnswer()) {
			std::cout << gameScene[actualScene]->getObjectFeedBack();
			AddToInventory(gameScene[actualScene]->nameObject);  // Cambiar por el nombre del objeto de la escena actual
		}
		else if (playerAnswer == gameScene[actualScene]->getGoAnswer()) {
			std::cout << gameScene[actualScene]->getGOFeedback();
			GameOver();
		}
		else if (playerAnswer == gameScene[actualScene]->getCorrectAnswer()) {
			std::cout << gameScene[actualScene]->getCorrectFeedBack();
		}
		else {
			std::cout << "Input No Valido, vuelve a intentarlo\n";
		}
		actualScene++;
		system("pause");
		system("cls");
		playerInventory.ShowInventory();
		system("pause");
		system("cls");

	}
}


void GameManager::AddToInventory(const std::string& item) {
	playerInventory.AddItem(item);
}

void GameManager::GameOver() {
	std::cout << "Juego Terminado";
	/*actualScene = SCENE_NUM + 1;*/
}