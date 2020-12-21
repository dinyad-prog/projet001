#include "enseignant.h"

using namespace std;

Enseignant::Enseignant(string Nom , string Prenoms , char Sexe, int Age ,string LieuDeNaissance,long NumTel, string Universite , string Email,long NumMatricule,string DiciplineEnseigner, int Ancienneter):Personnex(Nom ,  Prenoms ,  Sexe,  Age ,  LieuDeNaissance ,NumTel)
{
  email=Email;
  numMatricule= NumMatricule;
  diciplineEnseigner =DiciplineEnseigner ;
  ancienneter=Ancienneter;
  universite=Universite ;
}

Enseignant::~Enseignant()
{
      //dtor
}
string Enseignant:: getUniversite()
{
 return universite;
}

string Enseignant:: getEmail()
{
 return email;
}

long Enseignant:: getNumMatricule()
{
 return numMatricule;
}
string Enseignant:: getDiciplineEnseigner()
{
return diciplineEnseigner;
}

int Enseignant::getAncienneter()
{
 return ancienneter;
}

void Enseignant:: afficherEnseignant()
{
cout<<"email:"<<email<<endl<<endl;

cout<<"Je suis enseignant sous le numero matricule:"<<numMatricule<<" à " <<universite<<endl;
cout<<" j'enseigne:"<<diciplineEnseigner<< " et j'ai "<< ancienneter <<"ans d'ancienneté"<<endl<<endl;
}
void Enseignant:: verifierEnseignantMemeDicipline( Enseignant nouv)
{
if(diciplineEnseigner==nouv.getDiciplineEnseigner())
cout<<"les Enseignants:"<<nom<<" "<<prenoms<<" et "<<nouv.getnom()<<" "<<nouv.getprenoms()<<" enseignent tous  "<<diciplineEnseigner<<endl;
else
cout<<"les Enseignants:"<<nom<<" "<<prenoms<<" et "<<nouv.getnom()<<" "<<nouv.getprenoms()<<" n'enseignent pas les mêmes matières"<<endl;


}

