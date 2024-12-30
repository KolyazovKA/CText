#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <vector>
#include <string>

using namespace std;

class FileHandler {
public:
	// Чтение содержимого файла
	void readFile(const string& filename, vector<string>& lines);
	// Запись содержимого в файл
	void writeFile(const string& filename, const vector<string>& lines);
};

#endif