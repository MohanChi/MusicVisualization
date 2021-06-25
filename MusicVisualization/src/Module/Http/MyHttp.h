#pragma once
#include <iostream>

class MyHttp
{
public:
	MyHttp();
	~MyHttp();

	void SendJsonDataToServer(std::string serverUrl, std::string jsonData);
	void SendFileToServer(std::string serverUrl, std::string filename);
private:
	

};