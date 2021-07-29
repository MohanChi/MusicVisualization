#pragma once
#include "..\..\Module\Tables\CompletedVideoTable.h"

class VideoDataModel
{
public:
	VideoDataModel();
	~VideoDataModel();

	void SaveCompletedVideo(CompletedVideo);
	CompletedVideoVec GetAllCreateVideos();
	CompletedVideo GetCreateVideo(std::string filename);
	void DeleteCompeletdVideo(std::string filename);

private:

};
