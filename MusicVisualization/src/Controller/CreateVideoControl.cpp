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

void CreateVideoControl::SendMusicParametersAndMusicToServer(CreateVideo cv)
{
	MyHttp myHttp;
	JsonDataModel jdModel;
	myHttp.PostJsonDataToServer(postParameterURL, jdModel.FormCreateVideoJsonData(cv));
	myHttp.PostFileToServer(postMusicURL, cv.musicname);
}
