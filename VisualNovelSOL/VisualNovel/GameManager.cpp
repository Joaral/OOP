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
	while (actualScene < SCENE_NUM) {
		gameScene[actualScene]->PlayScene();
		Question();
		if (playerAnswer == gameScene[actualScene]->getObjectAnswer()) {

		}
		else if (playerAnswer == gameScene[actualScene]->getGoAnswer()) {
			std::cout << gameScene[actualScene]->getGOFeedback();
		}
		else if (playerAnswer == gameScene[actualScene]->getCorrectAnswer()) {
			actualScene++;
		}
		
		else {
			std::cout << "Input No Valido, vuelve a intentarlo\n";
		}
		system("pause");
		system("cls");
		actualScene++;
	}
}

void GameManager::GameOver() {

}