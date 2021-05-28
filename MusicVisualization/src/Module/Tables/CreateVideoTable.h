#pragma once
#include "SqliteManager.h"
#include "CommonData.h"
#include <vector>

typedef std::vector<CreateVideo> CreateVideoVec;

class CreateVideoTable : public SqliteManager
{
public:
	CreateVideoTable();
	~CreateVideoTable();

	std::string GetTableName();
	DBStatus InsertCreateVideo(CreateVideo Cr);
	DBStatus DeleteCreateVideo(std::string filename);
	DBStatus UpdateCreateVideo(CreateVideo new_Cr);
	CreateVideo SelectCreateVideo(std::string filename);
	CreateVideoVec SelectAllCreateVideos();
private:

};
