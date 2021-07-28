#pragma once
#include "SqliteManager.h"
#include "CommonData.h"
#include <vector>

typedef std::vector<CompletedVideo> CompletedVideoVec;

class CompletedVideoTable : public SqliteManager
{
public:
	CompletedVideoTable();
	~CompletedVideoTable();

	std::string GetTableName();
	DBStatus InsertCompleteVideo(CompletedVideo Co);
	DBStatus DeleteCompleteVideo(std::string filename);
	CompletedVideo SelectCompleteVideo(std::string filename);
	CompletedVideoVec SelectAllCompleteVideos();

private:

};
