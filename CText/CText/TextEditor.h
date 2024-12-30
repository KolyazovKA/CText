#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <vector>
#include <string>
#include "FileHandler.h"
#include "SearchEngine.h"
#include "SortAlgorithm.h"
#include "UI.h"

using namespace std;

class TextEditor {
public:
	// Загрузка данных из файла
	void loadFile(const string& filename);
	// Выгрузка данных в файл
	void saveFile(const string& filename);
	// Добавление новой строки
	void addLine(const string& line);
	// Удаление строки
	void deleteLine(const string& line);
	// Редактирование строки
	void editLine(const string& line);
	// Поиск в тексте
	void search(const string& line);
	// Сортировка текста
	void sort();
	//Отображения меню
	void displayMenu();
	//
	void display();

private:
	vector<string> textLines;
	FileHandler fileHandler;
	SearchEngine serachEngine;
	SortAlgorithm sortAlgorithm;
	UI ui;
};

#endif