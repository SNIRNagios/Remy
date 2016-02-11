#include "fen_superviseur.h"
#include "ui_fen_superviseur.h"

FEN_Superviseur::FEN_Superviseur(QWidget *parent) : QMainWindow(parent),ui(new Ui::FEN_Superviseur)
{
    ui->setupUi(this);
    superviseur = new Superviseur(this);

}

FEN_Superviseur::~FEN_Superviseur()
{
    delete ui;
}


//
//Slot du bouton sauvegarder
void FEN_Superviseur::on_PB_Valider_clicked()
{

    adresse = ui->LE_adresseIP->text();// Récupération de l'adresse IP..
    site = ui->LE_nomSite->text();// Récupération du nom du site distant

    superviseur->Save(site,adresse);


/*
    // Objet de base servant à la création de notre fichier XML
    QDomDocument FichierConfiguration;

    // Création de l'en-tête du fichier XML : <?xml version="1.0" encoding="UTF-8"?>
    QDomNode Entête = FichierConfiguration.createProcessingInstruction("xml","version=\"1.0\" encoding=\"UTF-8\"");

    // On insère cet en-tête avant le premier enfant
    FichierConfiguration.insertBefore(Entête, FichierConfiguration.firstChild());



    // Création de l'élément <Superviseur>
    QDomElement Superviseur = FichierConfiguration.createElement("Superviseur");

    // On ajoute l'élément <Superviseur> en tant que premier enfant du fichier XML
    FichierConfiguration.appendChild(Superviseur);

    // Création de l'élément <site Distant>
    QDomElement Site_Distant = FichierConfiguration.createElement("SiteDistant");

    // On ajoute l'élément <Site_Distant> en tant que premier enfant de l'élément <Superviseur>
    Superviseur.appendChild(Site_Distant);

    // Création de l'élément <Nom>
    QDomElement Nom= FichierConfiguration.createElement("Nom");

    // On ajoute l'élément <Nom> en tant que premier enfant de l'élément <Site Distant>
    Site_Distant.appendChild(Nom);

    // Création du texte qui sera entre les balises <Nom> </Nom>
    QDomText Text_Nom = FichierConfiguration.createTextNode(NomSite);

    // On ajoute ce texte à l'élément <Nom>
    Nom.appendChild(Text_Nom);

    // Création de l'élément <Adresse IP>
    QDomElement Element_AdresseIP = FichierConfiguration.createElement("AdresseIP");

    // On ajoute l'élément <Adresse IP> en tant que deuxième enfant de l'élément <Site_Distant>
    Site_Distant.appendChild(Element_AdresseIP);

    // Création du texte qui sera entre les balises <Adresse IP> </Adresse IP>
    QDomText Text_AdresseIP= FichierConfiguration.createTextNode(AdresseIP);

    // On ajoute ce texte à l'élément <AdresseIP>
    Element_AdresseIP.appendChild(Text_AdresseIP);

   // FichierConfiguration.insertAfter(test,FichierConfiguration.lastChild());



    // Création du fichier XML de sortie
    QFile file("FichierConfiguration.xml");

    // Ouverture de ce fichier en lecture seule
    file.open(QIODevice::WriteOnly);

    // On crée une QTextStream à partir de ce fichier
    QTextStream ts(&file);

    // Indentatation de 6 espaces vers la droite
    int indent=6;

    // On sauvegarde le fichier XML en précisant l'indentation désirée
    FichierConfiguration.save(ts, indent);

    QMessageBox::information(this, "Enregistrement", "Le fichier xml a bien été mis à jour");

*/
}


