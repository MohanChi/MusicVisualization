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

int CreateVideoControl::SendMusicParametersAndMusicToServer(CreateVideo cv)
{
	MyHttp myHttp;
	JsonDataModel jdModel;
	int res0 = myHttp.PostJsonDataToServer(postParameterURL, jdModel.FormCreateVideoJsonData(cv));
	int res1 = myHttp.PostFileToServer(postMusicURL, cv.musicname);
	if (res0 == 0 && res1 == 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}