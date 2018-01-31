#include "vo.h"
#include <QApplication>
//#include < QtPlugin >
//Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)
int main(int argc, char *argv[])
{
    QTextCodec *xcodec = QTextCodec::codecForLocale();
    QString exeDir = xcodec->toUnicode(QByteArray(argv[0]));
    QString BKE_CURRENT_DIR = QFileInfo(exeDir).path();
    //qt has a bug in 5.2.1(windows)? so I use setLibraryPaths
    QApplication::setLibraryPaths(QApplication::libraryPaths() << BKE_CURRENT_DIR);
    QApplication::addLibraryPath("./plugins");

    QApplication a(argc, argv);
    VO w;
    w.show();
    return a.exec();
}
