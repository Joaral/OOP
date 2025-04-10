#pragma once
#include "Scene.h"
#include "inventory.h"

class GameManager {
private:
	Scenes* gameScene[SCENE_NUM];
	Inventory playerInventory;

	int actualScene;
	int playerAnswer;

public:
	GameManager();
	void NewGame();
	void UpdateGame();
	void GameOver();
	void Question();
	void AddToInventory(const std::string& item);  // Método para agregar un objeto al inventario
};
