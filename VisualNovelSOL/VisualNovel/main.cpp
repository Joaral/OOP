#include <iostream>
#include "GameManager.h"

#include "windows.h"

void main() {

	setlocale(LC_ALL, "spanish");

	GameManager miGameManager;

	miGameManager.NewGame();
	miGameManager.UpdateGame();
}