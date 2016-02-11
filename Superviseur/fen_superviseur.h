#ifndef FEN_SUPERVISEUR_H
#define FEN_SUPERVISEUR_H

#include <QMainWindow>
#include "superviseur.h"


namespace Ui {
class FEN_Superviseur;
}

class FEN_Superviseur : public QMainWindow
{
    Q_OBJECT

public:
    explicit FEN_Superviseur(QWidget *parent = 0);

    ~FEN_Superviseur();

private slots:
    void on_PB_Valider_clicked();


private:
    Ui::FEN_Superviseur *ui;
    Superviseur *superviseur;

    QString adresse;
    QString site;


};

#endif // FEN_SUPERVISEUR_H
