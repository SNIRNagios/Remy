#ifndef FEN_SUPERVISEUR_H
#define FEN_SUPERVISEUR_H

#include <QMainWindow>

namespace Ui {
class FEN_Superviseur;
}

class FEN_Superviseur : public QMainWindow
{
    Q_OBJECT

public:
    explicit FEN_Superviseur(QWidget *parent = 0);
    ~FEN_Superviseur();

private:
    Ui::FEN_Superviseur *ui;
};

#endif // FEN_SUPERVISEUR_H
