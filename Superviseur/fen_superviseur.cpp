#include "fen_superviseur.h"
#include "ui_fen_superviseur.h"

FEN_Superviseur::FEN_Superviseur(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FEN_Superviseur)
{
    ui->setupUi(this);
}

FEN_Superviseur::~FEN_Superviseur()
{
    delete ui;
}
