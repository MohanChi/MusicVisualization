#include "CreateVideoTable.h"
#include <iostream>

CreateVideoTable::CreateVideoTable()
{
	InitializeDB("MusicVisualization.db");
	OpenDB();
	Excute("CREATE TABLE IF NOT EXISTS CreateVideo(" \
		"filename varchar(255) primary key , musicname varchar(255), style varchar(255), " \
		"pulse_react double, motion_react double, contrast_strength double)");
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
		+ std::to_string(Cr.pulse_react) + ", "
		+ std::to_string(Cr.motion_react) + ", "
		+ std::to_string(Cr.contrast_strength) + "); ";

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
		+ "musicname = \'" + new_Cr.style + "\', "
		+ "pulse_react = " + std::to_string(new_Cr.pulse_react) + ", "
		+ "motion_react = " + std::to_string(new_Cr.motion_react) + ", "
		+ "contrast_strength = " + std::to_string(new_Cr.contrast_strength) + " "
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
		if (res.column == 6)
		{
			cv.filename = res.result[6];
			cv.musicname = res.result[7];
			cv.style = res.result[8];
			cv.pulse_react = atof(res.result[9]);
			cv.motion_react = atof(res.result[10]);
			cv.contrast_strength = atof(res.result[11]);
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
		cv.filename = res.result[index];
		cv.musicname = res.result[index + 1];
		cv.style = res.result[index + 2];
		cv.pulse_react = atof(res.result[index + 3]);
		cv.motion_react = atof(res.result[index + 4]);
		cv.contrast_strength = atof(res.result[index + 5]);
		cvVec.push_back(cv);
	}
	DeleteResult(res.result);
	return cvVec;
}
