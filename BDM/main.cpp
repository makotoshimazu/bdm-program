#include <QApplication>
#include "mainwindow.h"
#include "paintCanvas.h"

using namespace std;




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    
    w.setGeometry(0, 0, 800, 600);      //      ウィンドウの位置とサイズ
    w.show();
    
    return a.exec();
}
