#pragma once
#include <string>

class JsonDataModel
{
public:
	JsonDataModel();
	~JsonDataModel();

	void FormJsonData();
	int ReadFileInBinary(std::string filename, std::string & binaryString);
	int WriteFileInBinary(std::string filename, const std::string binaryString);

private:

};