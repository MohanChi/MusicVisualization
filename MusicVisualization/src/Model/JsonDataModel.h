#pragma once
#include <string>
#include "../Module/Tables/CommonData.h"

class JsonDataModel
{
public:
	JsonDataModel();
	~JsonDataModel();

	std::string FormJsonData(CreateVideo cv);
	int ReadFileInBinary(std::string filename, std::string & binaryString);
	int WriteFileInBinary(std::string filename, const std::string binaryString);

private:

};