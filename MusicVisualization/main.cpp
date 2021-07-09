#include "MusicVisualization.h"
#include <QtWidgets/QApplication>
#include "src/Module/Tables/CompletedVideoTable.h"
#include "src/View/ThreeChoices/ThreeChoicesWindow.h"
#include "src/View/Common/WaitingLoadingWindow.h"
#include "src/View/Common/TopWindow.h"
#include "src/Module/Tables/CreateVideoTable.h"
#include "src/Model/CreateDataModel.h"
#include "src/Module/Http/MyHttp.h"
#include "src/Model/JsonDataModel.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

	TopWindow * tw = TopWindow::GetInstance();
	tw->show();

	/*CreateVideoTable cvt;
	CreateVideo cv;
	cv.filename = "dhei";
	cv.musicname = "music\\anfe\\dujfri.mp3";
	cv.pulse_react = 20.11111111123;
	cv.motion_react = 8;
	cv.contrast_strength = 1.56;
	cvt.InsertCreateVideo(cv);*/
	//CreateVideoVec cv1;
	//cv1 = cvt.SelectAllCreateVideos();
	//std::cout << cv1[1].contrast_strength;

	//CreateDataModel cdm;
	//dm.IsFilenameUnique("efferf");

	//MyHttp my;
	//my.PostFileToServer("http://127.0.0.1:5000/MusicData", "F:\\MIProject\\Always.mp3");
	//my.PostFileToServer("http://127.0.0.1:5000/MusicData", "ThisIsAtxt.txt");
	//my.GetFileFromServer("http://127.0.0.1:5000/VideoReturn/Never.mp3", "out.mp3");
	//my.GetFileFromServer("http://127.0.0.1:5000/VideoReturn/datingTestSet.txt", "datingTestSet.txt");

	/*JsonDataModel jdm;
	std::string str;
	jdm.ReadFileInBinary("F:\\MIProject\\Never.mp3", str);
	jdm.WriteFileInBinary("F:\\MIProject\\Always.mp3", str);*/

    return a.exec();
}