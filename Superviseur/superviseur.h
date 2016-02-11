#ifndef SUPERVISEUR_H
#define SUPERVISEUR_H

#include <QObject>
#include <QVector>
#include <QString>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QXmlStreamWriter>

class Superviseur : public QObject
{
    Q_OBJECT

private:


    QFile *fichier; //
    QString nomFichier;// Nom du fichier XML
    QVector <vector <QString> > vector;// Création d'un tableau dynamique


public:

    explicit Superviseur(QObject *parent = 0);
    void Save(QString nomSite, QString adresseIP);
    void Restore();

signals:

public slots:
};

#endif // SUPERVISEUR_H
