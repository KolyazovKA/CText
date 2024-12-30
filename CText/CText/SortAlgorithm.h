#ifndef SORT_ALGORITHM_H
#define SORT_ALGORITHM_H

#include <string>
#include <vector>
#include <algorithm>

class SortAlgorithm {
public:
	// ���������� ����������� ����� �� �������
	void sortLines(vector<string>& textLines);
	// �������� ���������� ����������� ����� �� ������� 
	void reverseSort(vector<string>& textLines);
	// ���������� ����������� ����� �� ����� ������
	void sortByLiength(vector<string>& textLines);
};


#endif