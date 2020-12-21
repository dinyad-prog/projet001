#include "moniteur.h"

using namespace std;

Moniteur::Moniteur(string Nom , string Prenoms , char Sexe, int Age , string lieuDeNaissance,long NumTel, long NumMatricule , string Email, string EntiterDetude , string Filiere, string NiveauDetude , string Group, string MatiereMantor): Etudiant(Nom , Prenoms , Sexe, Age ,lieuDeNaissance,NumTel, NumMatricule , Email, EntiterDetude ,  Filiere, NiveauDetude)
{
group=Group;
matiereMantor=MatiereMantor;
}

Moniteur::~Moniteur()
{
      //dto
}

string Moniteur:: getGroup()
{
 return group;
}

string Moniteur:: getMatiereMantor()
{
return matiereMantor;
}

void Moniteur:: afficherMoniteur()
{
cout<<"je suis un moniteur à l'entité:"<<entiterDetude<<endl;
cout<<"je fais Td en "<<matiereMantor<<"  avec "<<group<<endl;
}
