#include "CreateDataModel.h"


CreateDataModel::CreateDataModel()
{
}

CreateDataModel::~CreateDataModel()
{
}

bool CreateDataModel::IsFilenameUnique(std::string filename)
{
	CreateVideoTable cvt;
	CreateVideo cv;
	cv.filename = filename;
	if (cvt.InsertCreateVideo(cv))
	{
		return false;
	}
	return true;
}

CreateVideoVec CreateDataModel::GetAllCreateVideos()
{
	CreateVideoTable cvt;
	return cvt.SelectAllCreateVideos();
}

void CreateDataModel::UpdateCreateVideosData(CreateVideo cv)
{
	CreateVideoTable cvt;
	cvt.UpdateCreateVideo(cv);
}
