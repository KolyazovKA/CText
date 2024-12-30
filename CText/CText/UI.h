#ifndef UI_H
#define UI_H

#include <iostream>
#include <string>

using namespace std;

class UI {

public:
	// ����������� ��������� ����
	void displayMenu();
	//��������� ������ ������������
	int getUserChoice();
	// ����������� ���������
	void displayMessage(const string& message);
	// ��������� ������ �� ������������
	string getInput();
};

#endif