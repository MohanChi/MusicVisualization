#pragma once
#define serverURL "127.0.0.1"
#define postMusicURL "http://127.0.0.1:5000/MusicData"
#define postParameterURL "http://127.0.0.1:5000/ParameterData"
#define getVideoURL "http://127.0.0.1:5000/VideoReturn"
#include <string>

struct CompletedVideo
{

};

struct CreateVideo
{
	std::string filename;
	std::string musicname;
	std::string style;
	double pulse_react;
	double motion_react;
	double contrast_strength;
};