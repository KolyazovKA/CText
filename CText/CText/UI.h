#ifndef UI_H
#define UI_H

#include <iostream>
#include <string>

using namespace std;

class UI {

public:
	// Отображения основного меню
	void displayMenu();
	//Получение выбора пользователя
	int getUserChoice();
	// Отображение сообщений
	void displayMessage(const string& message);
	// Получение текста от пользователя
	string getInput();
};

#endif