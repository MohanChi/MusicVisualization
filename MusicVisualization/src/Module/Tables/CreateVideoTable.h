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
	DBStatus DeleteCreateVideo(std::string UID);
	DBStatus UpdateCreateVideo(std::string UID, CreateVideo new_Cr);
	CreateVideo SelectCreateVideo(std::string UID);
	CreateVideoVec SelectAllCreateVideos();
private:

};
