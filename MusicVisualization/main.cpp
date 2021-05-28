#include "MusicVisualization.h"
#include <QtWidgets/QApplication>
#include "src/Module/Tables/CompletedVideoTable.h"
#include "src/View/ThreeChoices/ThreeChoicesWindow.h"
#include "src/View/Common/WaitingLoadingWindow.h"
#include "src/View/Common/TopWindow.h"
#include "src/Module/Tables/CreateVideoTable.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

	TopWindow * tw = TopWindow::GetInstance();
	tw->show();

	CreateVideoTable cvt;
	CreateVideo cv;
	cv.UID = "hfdefji11`";
	cv.filename = "newcreate1";
	cv.musicname = "music\\anfe.mp3";
	cv.pulse_react = 0.8;
	cv.motion_react = 8.2;
	cv.contrast_strength = 6;
	cvt.InsertCreateVideo(cv);
	CreateVideoVec cv1;
	cv1 = cvt.SelectAllCreateVideos();
	std::cout << cv1[1].contrast_strength;
    return a.exec();
}