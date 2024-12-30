#ifndef SEARCH_ENGINE_H
#define SEARCH_ENGINE_H

#include <string>
#include <vector>
#include <iostream>

class SearchEngine {
public:
	// Поиск слова в файле
	void findWord(const string& queryWord, const vector<string>& textLines);
	// Поиск номер строки в файле
	void findLineNumber(const string& queryLine, const vector<string>& textlines);
	// Подсчитывает количеств вхождений query в текст
	void coutOccurrences(const string& query, const vector<string>& textLines);
};

#endif