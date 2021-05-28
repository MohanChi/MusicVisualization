#include "CreateVideoTable.h"
#include <iostream>

CreateVideoTable::CreateVideoTable()
{
	InitializeDB("MusicVisualization.db");
	OpenDB();
	Excute("CREATE TABLE IF NOT EXISTS CreateVideo(UID varchar(255) primary key, "\
		"filename varchar(255), musicname varchar(255), " \
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
		+ Cr.UID + "\', \'"
		+ Cr.filename + "\', \'"
		+ Cr.musicname + "\', "
		+ std::to_string(Cr.pulse_react) + ", "
		+ std::to_string(Cr.motion_react) + ", "
		+ std::to_string(Cr.contrast_strength) + "); ";

	return Excute(sql);
}

DBStatus CreateVideoTable::DeleteCreateVideo(std::string UID)
{
	std::string sql;
	sql = "DELETE FROM " + GetTableName() + " WHERE UID = \'" + UID + "\';";

	return Excute(sql);
}

DBStatus CreateVideoTable::UpdateCreateVideo(std::string UID, CreateVideo new_Cr)
{
	std::string sql;
	sql = "UPDATE " + GetTableName() + " SET "
		+ "filename = \'" + new_Cr.filename + "\', "
		+ "musicname = \'" + new_Cr.musicname + "\', "
		+ "pulse_react = " + std::to_string(new_Cr.pulse_react) + ", "
		+ "motion_react = " + std::to_string(new_Cr.motion_react) + ", "
		+ "contrast_strength = " + std::to_string(new_Cr.contrast_strength) + " "
		+ "WHERE UID = \'" + UID + "\';";

	return Excute(sql);
}

CreateVideo CreateVideoTable::SelectCreateVideo(std::string UID)
{
	std::string sql;
	CreateVideo cv;
	sql = "SELECT * FROM " + GetTableName() + " WHERE UID = \'" + UID + "\';";
	DBResult res = Select(sql);
	if (res.row == 1)
	{
		if (res.column == 6)
		{
			cv.UID = res.result[6];
			cv.filename = res.result[7];
			cv.musicname = res.result[8];
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
		cv.UID = res.result[index];
		cv.filename = res.result[index + 1];
		cv.musicname = res.result[index + 2];
		cv.pulse_react = atof(res.result[index + 3]);
		cv.motion_react = atof(res.result[index + 4]);
		cv.contrast_strength = atof(res.result[index + 5]);
		cvVec.push_back(cv);
	}
	return cvVec;
}
