#pragma once
#include "Const.h"
class Scenes {
protected:
	std::string sceneName;
	std::string description;
	std::string options[OPTIONS_NUM];

	std::string gameOverFeedback;
	std::string correctFeedback;
	std::string objectFeedBack;

	int correctAnswer;
	int objectAnswer;
	int goAnswer;
public:
	virtual void PlayScene() = 0;

	int getCorrectAnswer() { return correctAnswer; }
	int getObjectAnswer() { return objectAnswer; }
	int getGoAnswer() { return goAnswer; }
	std::string getGOFeedback() { return gameOverFeedback; }
	std::string getCorrectFeedBack() { return correctFeedback; }
	std::string getObjectFeedBack() { return objectFeedBack; }

	std::string nameObject;

};

class Scene1 :public Scenes {
public:
	Scene1();
private:
	void PlayScene() override;
};

class Scene2 :public Scenes {
public:
	Scene2();
private:
	void PlayScene() override;
};

class Scene3 :public Scenes {
public:
	Scene3();
private:
	void PlayScene() override;
};