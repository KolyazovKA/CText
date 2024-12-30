#ifndef SORT_ALGORITHM_H
#define SORT_ALGORITHM_H

#include <string>
#include <vector>
#include <algorithm>

class SortAlgorithm {
public:
	// Сортировка содержимого файла по строкам
	void sortLines(vector<string>& textLines);
	// Обратная сортировка содержимого файла по строкам 
	void reverseSort(vector<string>& textLines);
	// Сортировка содержимого файла по длине строки
	void sortByLiength(vector<string>& textLines);
};


#endif