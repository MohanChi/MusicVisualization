#include "VideoDataModel.h"

VideoDataModel::VideoDataModel()
{
}

VideoDataModel::~VideoDataModel()
{
}

void VideoDataModel::SaveCompletedVideo(CompletedVideo co)
{
	CompletedVideoTable cvTable;
	cvTable.InsertCompleteVideo(co);
}

CompletedVideoVec VideoDataModel::GetAllCreateVideos()
{
	CompletedVideoTable cvTable;
	return cvTable.SelectAllCompleteVideos();
}

CompletedVideo VideoDataModel::GetCreateVideo(std::string filename)
{
	CompletedVideoTable cvTable;
	return cvTable.SelectCompleteVideo(filename);
}
