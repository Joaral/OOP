#include <iostream>
#include <vector>
#include <fstream>
#include <string>
struct Items {
	std::string nameItem;
	float bonification;
};
struct Position {
	int x, y;
};

class Player {
	short life;
	int gold;
	Position pos;
};

class ArchiveManager {
	std::string dungeonArchive;
	std::string saveArchive;
	std::string itemsArchive;
};

class GameManager {
	ArchiveManager archiveController;

	std::vector<std::string> room;
	Player player;
	std::vector<Items> ItemsList;
public:
	//metodes
	bool UpdateRoom(std::string archiveName) {
		std::ifstream file(archiveName);
		if (!file.is_open()) {
			std::cout << "Error al cargar el archivo";
			return false;
		}
		std::string line;
		while (std::getline(file, line)) {
			room.push_back(line);
		}

		file.close();
		return true;
	}

	void RenderRoom() {
		for (int i = 0; i < room.size(); i++)
		{
			std::cout << room[i] << std::endl;
		}
	}

};

int main() {
	const std::string RoomArchive = "Room.txt";
	GameManager gameManager;
	
	if (gameManager.UpdateRoom(RoomArchive)) {
		gameManager.RenderRoom();
	}

	return 0;
}