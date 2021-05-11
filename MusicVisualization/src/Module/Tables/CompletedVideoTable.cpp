#include "CompletedVideoTable.h"

CompletedVideoTable::CompletedVideoTable()
{
	InitializeDB("MusicVisualization.db");
	OpenDB();
	Excute("CREATE TABLE IF NOT EXISTS CompletedVideo(UID varchar(255) primary key, userName varchar(255))");
}

CompletedVideoTable::~CompletedVideoTable()
{
}