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
	// �������� ������ �� �����
	void loadFile(const string& filename);
	// �������� ������ � ����
	void saveFile(const string& filename);
	// ���������� ����� ������
	void addLine(const string& line);
	// �������� ������
	void deleteLine(const string& line);
	// �������������� ������
	void editLine(const string& line);
	// ����� � ������
	void search(const string& line);
	// ���������� ������
	void sort();
	//����������� ����
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