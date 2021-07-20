#pragma once
#include <iostream>
#include <atlstr.h>

class MyHttp
{
public:
	MyHttp();
	~MyHttp();

	int PostJsonDataToServer(std::string serverUrl, std::string jsonData);
	int PostFileToServer(std::string serverUrl, std::string filename);
	int GetFileFromServer(std::string serverUrl, std::string outFilename);

private:
	
	static size_t callback_write_file(void * ptr, size_t size, size_t nmemb, void * stream);
	
};
static CString httpsResult;