#include "etudiant.h"

#include "personnex.h"

using namespace std;

Etudiant::Etudiant(string Nom , string Prenoms , char Sexe, int Age , string lieuDeNaissance,long NumTel, long NumMatricule , string Email, string EntiterDetude , string Filiere, string NiveauDetude):Personnex(Nom ,  Prenoms ,  Sexe,  Age ,  lieuDeNaissance ,NumTel)
{
  numMatricule=NumMatricule;
  email=Email;
  entiterDetude=EntiterDetude;
  niveauDetude=NiveauDetude;
  filiere=Filiere;
}

Etudiant::~Etudiant()
{
      //dtor
}

// les autres methodes
long Etudiant:: getNumMatricule()
{
 return numMatricule;
}
string Etudiant:: getEmail()
{
 return email;
}

string Etudiant:: getEntiterDetude()
{
 return entiterDetude;
}
string Etudiant:: getFiliere()
{
  return filiere;
}
string Etudiant:: getNiveauDetude()
{
 return niveauDetude;
}
void Etudiant::afficherEtudiant()
{
 cout<<"Numero Matricule:"<<numMatricule<<endl;
 cout<<"Email_Etudiant:"<<email<<endl;
 cout<<"l'Entité de l'etudiant:"<<entiterDetude<<endl;
 cout<<"Filière: "<<filiere<<endl;
 cout<<"Niveau d'étude:"<<niveauDetude<<endl<<endl;
}

void Etudiant:: verifierEtudiantMemeEntiter(Etudiant nouv)
{
if (entiterDetude==nouv.getEntiterDetude())
cout<<"les Etudiants:"<<nom<<" "<<prenoms<<"et "<<nouv.getnom()<<" "<<nouv.getprenoms()<<" sont de même entité:"<<entiterDetude<<endl;
else
cout<<"les Etudiants:"<<nom<<" "<<prenoms<<"et "<<nouv.getnom()<<" "<<nouv.getprenoms()<<" ne sont pas de même entité"<<endl;

}
