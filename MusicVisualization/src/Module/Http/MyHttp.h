#pragma once
#include <iostream>
#include <atlstr.h>

class MyHttp
{
public:
	MyHttp();
	~MyHttp();

	void PostJsonDataToServer(std::string serverUrl, std::string jsonData);
	void PostFileToServer(std::string serverUrl, std::string filename);

	void GetFileFromServer(std::string serverUrl, std::string outFilename);
private:
	
	static size_t callback_write_file(void * ptr, size_t size, size_t nmemb, void * stream);
	
};
static CString httpsResult;