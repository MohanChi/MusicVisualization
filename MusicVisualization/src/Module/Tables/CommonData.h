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
	int speed_fpm = 12;
	double pulse_react;
	double motion_react;
	double motion_randomness;
	double contrast_strength;
	double class_pitch_react;
	double flash_strength;
	bool pulse_percussive;
	bool pulse_harmonic;
	bool motion_percussive;
	bool motion_harmonic;
	bool flash_percussive;
	bool contrast_percussive;
	int resolution = 360;
	int start = 0;
	int fps = 43;
};