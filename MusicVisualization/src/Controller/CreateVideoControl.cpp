#include "CreateVideoControl.h"
#include "../Model/CreateDataModel.h"
#include "../Module/Http/MyHttp.h"
#include "../Model/JsonDataModel.h"

CreateVideoControl::CreateVideoControl()
{
}

CreateVideoControl::~CreateVideoControl()
{
}

int CreateVideoControl::SendMusicParametersToServer(CreateVideo cv)
{
	MyHttp myHttp;
	JsonDataModel jdModel;
	return myHttp.PostJsonDataToServer(postParameterURL, jdModel.FormCreateVideoJsonData(cv));
}

int CreateVideoControl::SendMusicToServer(CreateVideo cv)
{
	MyHttp myHttp;
	JsonDataModel jdModel;
	return myHttp.PostFileToServer(postMusicURL, cv.musicname);
}

int CreateVideoControl::GetVideoFromServer(CreateVideo cv)
{
	MyHttp myHttp;
	JsonDataModel jdModel;
	return myHttp.GetFileFromServer(getVideoURL, cv.filename);
}
