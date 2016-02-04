#include "fen_superviseur.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FEN_Superviseur w;
    w.show();

    return a.exec();
}
