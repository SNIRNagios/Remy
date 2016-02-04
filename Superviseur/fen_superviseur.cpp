#include "fen_superviseur.h"
#include "ui_fen_superviseur.h"
#include <QString>
#include <QMessageBox>
//#include <QDomDocument>
//#include <QDomElement>
//#include <QDomNode>
//#include <QDomNodeList>
#include <QFile>
#include <QXmlStreamWriter>


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


//
//Slot du bouton sauvegarder
void FEN_Superviseur::on_PB_Valider_clicked()
{
    bool ok;

    Port = ui->LE_Port->text().toInt(&ok);// Récupération du port saisie par l'administrateur

    if (ok==true)
    {



    }
    else QMessageBox::warning(this, "Erreur", "Le numéro de port de saisie est incorrect");

    AdresseIP = ui->LE_AdresseIP->text();// Récupération de l'adresse IP..
    NomSite = ui->LE_NomSite->text();// Récupération du nom du site distant


    QString NomFichier = "FichierSuperviseur.xml";
    QFile Fichier(NomFichier);
    // Ouverture du fichier en écriture et en texte.
  if(  Fichier.open(QFile::WriteOnly | QFile::Text))
  {
    QXmlStreamWriter writer(&Fichier);

    // Permet l'indentation du fichier XML
    writer.setAutoFormatting(true);

    // Écrit l'en-tête du fichier XML : <?xml version="1.0" encoding="UTF-8" ?>
    writer.writeStartDocument();

    // Élément racine du fichier XML
    writer.writeStartElement("Superviseur");

    // Ajoute l'élément site distant
    writer.writeStartElement("Site distant");

    // Ajoute l'élément Adresse IP du site distant et son adresse IP puis le ferme
    writer.writeTextElement(NomSite, AdresseIP);


    // Ferme l'élément site distant
    writer.writeEndElement();

    // Finalise le document XML
    writer.writeEndDocument();

    // Fermer le fichier pour bien enregistrer le document et ferme l'élément superviseur
    Fichier.close();
    QMessageBox::warning(this, "Message", "Le fichier xml a bien été mis à jour");


}
}


