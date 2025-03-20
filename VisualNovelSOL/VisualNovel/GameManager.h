#pragma once
#include "Scene.h"

class GameManager {
private:
	Scenes* gameScene[SCENE_NUM];

	int actualScene;
	int playerAnswer;

public:
	GameManager();
	void NewGame();
	void UpdateGame();
	void GameOver();
	void Question();
};