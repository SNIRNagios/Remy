#include "superviseur.h"

Superviseur::Superviseur(QObject *parent) : QObject(parent)
{
    // On enregistre le nom du fichier XML dans un QString
    // On crée le fichier XML avec le nom contenu dans le QString - On ouvre le fichier

}

void Superviseur::Save(QString nomSite, QString adresseIP)
{
    nomFichier = "FichierSuperviseur.xml";
    fichier = new QFile(nomFichier);

    //vector.append(nomSite + adresseIP);
    //vector.push_back();

vector.push_back(QVector<QString>(nomSite));
vector.push_back(QVector<QString>(adresseIP));


    // Création et ouverture du fichier XML ou seulement ouverture du fichier XML si le fichier existe déjà
   // Ouverture du fichier en écriture et en texte.

  if(fichier->open(QFile::WriteOnly | QFile::Text))
  {
    // Permet d'éditer le fichier XML - Objet servant à l'écriture
    QXmlStreamWriter writer(fichier);

    // Active l'indentation du fichier XML pour avoir une meilleur visibilité
    writer.setAutoFormatting(true);//bool

    // Écrit l'en-tête du fichier XML : <?xml version="1.0" encoding="UTF-8" ?>
    writer.writeStartDocument();

    //for (initialisation; test de continuation; boucle)
    for( int i=0; i < vector.size(); i++ )// size() Taille du tableau
    {

        writer.writeStartElement("superviseur");//<superviseur>
        writer.writeStartElement("collecteur");//<collecteur>
        writer.writeTextElement("site",vector[i]);//<site>variable</site>
        writer.writeTextElement("adresse",vector[i]);//<adresse>variable</adresse>
        writer.writeEndElement();//</collecteur>
        writer.writeEndElement();//</superviseur>

        /*
        <Superviseur>
            <SiteDistant>
                <site>variable</site>
                <adresseIP>variable</adresseIP>
            </SiteDistant>
        </Superviseur>
        */
  }

    // Finalise le document XML
    writer.writeEndDocument();

    // Fermer le fichier pour bien enregistrer le document et ferme l'élément "Superviseur"
    fichier->close();
    // Message d'information généré après la mise à jour du fichier XML
    QMessageBox alerte;
    alerte.setWindowTitle("Enregistrement");
    alerte.setText("Le fichier xml a bien été mis à jour");
    alerte.setIcon(QMessageBox::Information);
    alerte.exec();
  }
}

void Superviseur::Restore()
{

}


