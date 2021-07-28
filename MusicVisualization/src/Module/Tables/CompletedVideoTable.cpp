#include "CompletedVideoTable.h"

CompletedVideoTable::CompletedVideoTable()
{
	InitializeDB("MusicVisualization.db");
	OpenDB();
	Excute("CREATE TABLE IF NOT EXISTS CompletedVideo(filename varchar(255) primary key," \
		"videoPath varchar(255))");
}

CompletedVideoTable::~CompletedVideoTable()
{
}

std::string CompletedVideoTable::GetTableName()
{
	return "CompletedVideo";
}

DBStatus CompletedVideoTable::InsertCompleteVideo(CompletedVideo Co)
{
	std::string sql;
	sql = "INSERT INTO " + GetTableName() + " VALUES (\'"
		+ Co.filename + "\', \'"
		+ Co.videoPath + "\');";
	return Excute(sql);
}

DBStatus CompletedVideoTable::DeleteCompleteVideo(std::string filename)
{
	std::string sql;
	sql = "DELETE FROM " + GetTableName() + " WHERE filename = \'" + filename + "\';";

	return Excute(sql);
}

CompletedVideo CompletedVideoTable::SelectCompleteVideo(std::string filename)
{
	std::string sql;
	CompletedVideo co;
	sql = "SELECT * FROM " + GetTableName() + " WHERE filename = \'" + filename + "\';";
	DBResult res = Select(sql);
	if (res.row == 1)
	{
		if (res.column == 2)
		{
			int i = 2;
			co.filename = res.result[i++];
			co.videoPath = res.result[i++];
		}
		else
		{
			return CompletedVideo();
		}
	}
	else
	{
		return CompletedVideo();
	}
	DeleteResult(res.result);
	return co;
}

CompletedVideoVec CompletedVideoTable::SelectAllCompleteVideos()
{
	std::string sql;
	CompletedVideoVec coVec;
	sql = "SELECT * FROM " + GetTableName();
	DBResult res = Select(sql);
	int num = res.row * res.column;
	int index = 0;
	for (int i = 0; i < res.row; i++)
	{
		CompletedVideo co;
		index = res.column * (i + 1);
		co.filename = res.result[index++];
		co.videoPath = res.result[index++];
		coVec.push_back(co);
	}
	DeleteResult(res.result);
	return coVec;
}

