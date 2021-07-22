#include "JsonDataModel.h"
#include <iostream>
#include <qjsonobject.h>
#include <qjsondocument.h>
#include <fstream>

#define MAXBYTE 0xffff

JsonDataModel::JsonDataModel()
{
}

JsonDataModel::~JsonDataModel()
{
}

std::string JsonDataModel::FormCreateVideoJsonData(CreateVideo cv)
{
	QJsonObject obj;
	obj.insert("filename", cv.filename.c_str());
	obj.insert("style", cv.style.c_str());
	obj.insert("speed_fpm", cv.speed_fpm);
	obj.insert("pulse_react", cv.pulse_react);
	obj.insert("motion_react", cv.motion_react);
	obj.insert("motion_randomness", cv.motion_randomness);
	obj.insert("contrast_strength", cv.contrast_strength);
	obj.insert("class_pitch_react", cv.class_pitch_react);
	obj.insert("flash_strength", cv.flash_strength);
	obj.insert("pulse_percussive", cv.pulse_percussive);
	obj.insert("pulse_harmonic", cv.pulse_harmonic);
	obj.insert("motion_percussive", cv.motion_percussive);
	obj.insert("motion_harmonic", cv.motion_harmonic);
	obj.insert("flash_percussive", cv.flash_percussive);
	obj.insert("contrast_percussive", cv.contrast_percussive);
	obj.insert("resolution", cv.resolution);
	obj.insert("start", cv.start);
	obj.insert("fps", cv.fps);

	return (QJsonDocument(obj).toJson()).toStdString();
}

int JsonDataModel::ReadFileInBinary(std::string filename, std::string & binaryString)
{
	std::ifstream fin;
	fin.open(filename, std::ios_base::binary);
	if (!fin.is_open())
	{
		return -1;
	}
	fin.seekg(0, std::ios::end);
	long fsize = fin.tellg();
	fin.seekg(0, std::ios::beg);

	char szin[MAXBYTE] = { 0 };
	long readLen = MAXBYTE;
	std::string str;
	if (fsize <= MAXBYTE)
	{
		readLen = fsize;
	}

	while (fin.read(szin, readLen))
	{
		for (int i = 0; i < readLen; i++)
		{
			binaryString += szin[i];
		}
		fsize -= MAXBYTE;
		if (fsize <= MAXBYTE)
		{
			readLen = fsize;
		}
		if (fsize < 0)
		{
			break;
		}			
	}
	int size = binaryString.size();

	fin.close();
	return 0;
}

int JsonDataModel::WriteFileInBinary(std::string filename, const std::string binaryString)
{
	std::ofstream fout;
	fout.open(filename, std::ios_base::binary);
	if (!fout.is_open())
	{
		return -1;
	}
	int index = 0;
	int strSize = binaryString.size();
	while (strSize > 0)
	{
		if (strSize < MAXBYTE)
		{
			fout.write(binaryString.substr(index * MAXBYTE, strSize).c_str(), strSize);
			break;
		}
		else
		{
			fout.write(binaryString.substr(index * MAXBYTE, MAXBYTE).c_str(), MAXBYTE);
		}
		index++;
		strSize -= MAXBYTE;
	}
	fout.close();
	return 0;
}
