#pragma once
#define serverURL "127.0.0.1"
#define postMusicURL "http://127.0.0.1:5000/MusicData"
#define postParameterURL "http://127.0.0.1:5000/ParameterData"
#define getVideoURL "http://127.0.0.1:5000/VideoReturn"
#include <string>

struct CreateVideo
{
	std::string filename;
	std::string musicname;
	std::string style;
	int speed_fpm = 12;
	double pulse_react = 0.5;
	double motion_react = 0.5;
	double motion_randomness = 0.5;
	double contrast_strength = 0.5;
	double class_pitch_react = 0.5;
	double flash_strength = 0.5;
	bool pulse_percussive = true;
	bool pulse_harmonic = false;
	bool motion_percussive = false;
	bool motion_harmonic = true;
	bool flash_percussive = true;
	bool contrast_percussive = true;
	int resolution = 360;
	int start = 0;
	int fps = 43;
};

struct CompletedVideo
{
	std::string filename;
	std::string videoPath;
};