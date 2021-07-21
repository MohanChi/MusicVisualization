#include "CreateVideoTable.h"
#include <iostream>
#include <sstream>

CreateVideoTable::CreateVideoTable()
{
	InitializeDB("MusicVisualization.db");
	OpenDB();
	Excute("CREATE TABLE IF NOT EXISTS CreateVideo(" \
		"filename varchar(255) primary key , musicname varchar(255), style varchar(255), " \
		"speed_fpm int, pulse_react double, motion_react double, motion_randomness double," \
		"contrast_strength double, class_pitch_react double, flash_strength double, " \
		"pulse_percussive bool, pulse_harmonic bool, motion_percussive bool, " \
		"motion_harmonic bool, flash_percussive bool, contrast_percussive bool, " \
		"resolution int, start int, fps int " \
		" )");
}

CreateVideoTable::~CreateVideoTable()
{
}

std::string CreateVideoTable::GetTableName()
{
	return "CreateVideo";
}

DBStatus CreateVideoTable::InsertCreateVideo(CreateVideo Cr)
{
	std::string sql;
	sql = "INSERT INTO " + GetTableName() + " VALUES (\'"
		+ Cr.filename + "\', \'"
		+ Cr.musicname + "\', \'"
		+ Cr.style + "\', "
		+ std::to_string(Cr.speed_fpm) + ", "
		+ std::to_string(Cr.pulse_react) + ", "
		+ std::to_string(Cr.motion_react) + ", "
		+ std::to_string(Cr.motion_randomness) + ", "
		+ std::to_string(Cr.contrast_strength) + ", "
		+ std::to_string(Cr.class_pitch_react) + ", "
		+ std::to_string(Cr.flash_strength) + ", "
		+ std::to_string(Cr.pulse_percussive) + ", "
		+ std::to_string(Cr.pulse_harmonic) + ", "
		+ std::to_string(Cr.motion_percussive) + ", "
		+ std::to_string(Cr.motion_harmonic) + ", "
		+ std::to_string(Cr.flash_percussive) + ", "
		+ std::to_string(Cr.contrast_percussive) + ", "
		+ std::to_string(Cr.resolution) + ", "
		+ std::to_string(Cr.start) + ", "
		+ std::to_string(Cr.fps) + "); ";
	return Excute(sql);
}

DBStatus CreateVideoTable::DeleteCreateVideo(std::string filename)
{
	std::string sql;
	sql = "DELETE FROM " + GetTableName() + " WHERE filename = \'" + filename + "\';";

	return Excute(sql);
}

DBStatus CreateVideoTable::UpdateCreateVideo(CreateVideo new_Cr)
{
	std::string sql;
	sql = "UPDATE " + GetTableName() + " SET "
		+ "musicname = \'" + new_Cr.musicname + "\', "
		+ "style = \'" + new_Cr.style + "\', "
		+ "speed_fpm = " + std::to_string(new_Cr.speed_fpm) + ", "
		+ "pulse_react = " + std::to_string(new_Cr.pulse_react) + ", "
		+ "motion_react = " + std::to_string(new_Cr.motion_react) + ", "
		+ "motion_randomness = " + std::to_string(new_Cr.motion_randomness) + ", "
		+ "contrast_strength = " + std::to_string(new_Cr.contrast_strength) + ", "
		+ "class_pitch_react = " + std::to_string(new_Cr.class_pitch_react) + ", "
		+ "flash_strength = " + std::to_string(new_Cr.flash_strength) + ", "
		+ "pulse_percussive = " + BoolToString(new_Cr.pulse_percussive) + ", "
		+ "pulse_harmonic = " + BoolToString(new_Cr.pulse_harmonic) + ", "
		+ "motion_percussive = " + BoolToString(new_Cr.motion_percussive) + ", "
		+ "motion_harmonic = " + BoolToString(new_Cr.motion_harmonic) + ", "
		+ "flash_percussive = " + BoolToString(new_Cr.flash_percussive) + ", "
		+ "contrast_percussive = " + BoolToString(new_Cr.contrast_percussive) + ", "
		+ "resolution = " + std::to_string(new_Cr.resolution) + ", "
		+ "start = " + std::to_string(new_Cr.start) + ", "
		+ "fps = " + std::to_string(new_Cr.fps) + " "
		+ "WHERE filename = \'" + new_Cr.filename + "\';";

	return Excute(sql);
}

CreateVideo CreateVideoTable::SelectCreateVideo(std::string filename)
{
	std::string sql;
	CreateVideo cv;
	sql = "SELECT * FROM " + GetTableName() + " WHERE filename = \'" + filename + "\';";
	DBResult res = Select(sql);
	if (res.row == 1)
	{
		if (res.column == 19)
		{
			int i = 19;
			cv.filename = res.result[i++];
			cv.musicname = res.result[i++];
			cv.style = res.result[i++];
			cv.speed_fpm = atoi(res.result[i++]);
			cv.pulse_react = atof(res.result[i++]);
			cv.motion_react = atof(res.result[i++]);
			cv.motion_randomness = atof(res.result[i++]);
			cv.contrast_strength = atof(res.result[i++]);
			cv.class_pitch_react = atof(res.result[i++]);
			cv.flash_strength = atof(res.result[i++]);
			cv.pulse_percussive = StringToBool(res.result[i++]);
			cv.pulse_harmonic = StringToBool(res.result[i++]);
			cv.motion_percussive = StringToBool(res.result[i++]);
			cv.motion_harmonic = StringToBool(res.result[i++]);
			cv.flash_percussive = StringToBool(res.result[i++]);
			cv.contrast_percussive = StringToBool(res.result[i++]);
			cv.resolution = atoi(res.result[i++]);
			cv.start = atoi(res.result[i++]);
			cv.fps = atoi(res.result[i++]);
		}
		else
		{
			return CreateVideo();
		}
	}
	else
	{
		return CreateVideo();
	}
	DeleteResult(res.result);
	return cv;
}

CreateVideoVec CreateVideoTable::SelectAllCreateVideos()
{
	std::string sql;
	CreateVideoVec cvVec;
	sql = "SELECT * FROM " + GetTableName();
	DBResult res = Select(sql);
	int num = res.row * res.column;
	int index = 0;
	for (int i = 0; i < res.row; i++)
	{
		CreateVideo cv;
		index = res.column * (i + 1);
		cv.filename = res.result[index++];
		cv.musicname = res.result[index++];
		cv.style = res.result[index++];
		cv.speed_fpm = atoi(res.result[index++]);
		cv.pulse_react = atof(res.result[index++]);
		cv.motion_react = atof(res.result[index++]);
		cv.motion_randomness = atof(res.result[index++]);
		cv.contrast_strength = atof(res.result[index++]);
		cv.class_pitch_react = atof(res.result[index++]);
		cv.flash_strength = atof(res.result[index++]);
		cv.pulse_percussive = StringToBool(res.result[index++]);
		cv.pulse_harmonic = StringToBool(res.result[index++]);
		cv.motion_percussive = StringToBool(res.result[index++]);
		cv.motion_harmonic = StringToBool(res.result[index++]);
		cv.flash_percussive = StringToBool(res.result[index++]);
		cv.contrast_percussive = StringToBool(res.result[index++]);
		cv.resolution = atoi(res.result[index++]);
		cv.start = atoi(res.result[index++]);
		cv.fps = atoi(res.result[index++]);
		cvVec.push_back(cv);
	}
	DeleteResult(res.result);
	return cvVec;
}

bool CreateVideoTable::StringToBool(std::string str)
{
	bool b;
	std::istringstream(str) >> b;
	return b;
}

std::string CreateVideoTable::BoolToString(bool b)
{
	return b ? "true" : "false";
}
