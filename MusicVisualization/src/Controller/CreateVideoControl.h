#pragma once
#include "../Module/Tables/CommonData.h"

class CreateVideoControl
{
public:
	CreateVideoControl();
	~CreateVideoControl();

	int SendMusicParametersToServer(CreateVideo cv);
	int SendMusicToServer(CreateVideo cv);
	int GetVideoFromServer(CreateVideo cv);

private:

};
