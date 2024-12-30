#ifndef SEARCH_ENGINE_H
#define SEARCH_ENGINE_H

#include <string>
#include <vector>
#include <iostream>

class SearchEngine {
public:
	// ����� ����� � �����
	void findWord(const string& queryWord, const vector<string>& textLines);
	// ����� ����� ������ � �����
	void findLineNumber(const string& queryLine, const vector<string>& textlines);
	// ������������ ��������� ��������� query � �����
	void coutOccurrences(const string& query, const vector<string>& textLines);
};

#endif