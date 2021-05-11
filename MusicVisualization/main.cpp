#include "MusicVisualization.h"
#include <QtWidgets/QApplication>
#include "src/Module/Tables/CompletedVideoTable.h"
#include "src/View/ThreeChoices/ThreeChoicesWindow.h"
#include "src/View/Common/WaitingLoadingWindow.h"
#include "src/View/Common/TopWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MusicVisualization w;
    //w.show();
	//CompletedVideoTable cvt;
	TopWindow * tw = TopWindow::GetInstance();
	tw->show();
	//ThreeChoicesWindow tcw;
	//tcw.show();
	
	//WaitingLoadingWindow wlw;
	//wlw.setParent(&tw);
	//wlw.show();
	

    return a.exec();
}