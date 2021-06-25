#pragma once
#include "../../Module/Tables/CreateVideoTable.h"

class CreateDataModel
{
public:
	CreateDataModel();
	~CreateDataModel();

	bool IsFilenameUnique(std::string filename);
	CreateVideoVec GetAllCreateVideos();
	void UpdateCreateVideosData(CreateVideo cv);

private:

};