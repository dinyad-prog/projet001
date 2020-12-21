#include "etudiant.h"

#include "personnex.h"
#include "enseignant.h"
#include "moniteur.h"
#include<iostream>
#include <string>

using namespace std;



int main()
{
cout<<"PERSONNE"<<endl<<endl;
Personnex jhos("GUIDIHOUNME" , "Julien Hospice" , 'M', 22, "Djidja", 97124431);
  jhos.afficherpersonnex();
  cout<<endl<<endl;
  cout<<"Etudiant"<<endl<<endl;
 Etudiant Hospice("GUIDIHOUNME" , "Julien Hospice" , 'M', 22 , "Djidja", 97124431 ,12464416, "g.jhospice@gmail.com" , "Fast", "Mathematique", "3eme année");
 Hospice.afficherpersonnex();

 Hospice.afficherEtudiant();
Etudiant GUIDI("GUIDI" , " Hospice" , 'M', 22 , "Djidja", 97124431 ,12464416, "g.jhospice@gmail.com" , "Fast", "Mathematique", "3eme année");
Etudiant walker("HOUNHA" , " Walker" , 'M', 25 , "assokléta", 97124431 ,12464364316, "g.jhospice@gmail.com" , "Faseg", "économie", "3eme année");
Hospice.verifierEtudiantMemeEntiter(GUIDI);
walker.verifierEtudiantMemeEntiter(GUIDI);

cout<<endl<<endl;
cout<<"ENSEIGNANT"<<endl<<endl;

Enseignant Siegfred("GUIDIHOUNME" , "Siedfred" , 'M', 50 , "Djidja", 97124431 , "l'UAC" , "g.jhospice@gmail.com", 4453764556,"INformatique" , 5 );
Enseignant Chadonette("GUIDIHOUNME" , "Chadonette" , 'M', 36 , "Djidja", 97124431 , "l'UAC" , "g.jhospice@gmail.com", 4453764556,"INformatique" , 5 );

Siegfred.afficherpersonnex();
Siegfred.afficherEnseignant();
Chadonette.verifierEnseignantMemeDicipline(Siegfred);
cout<<endl<<endl;

cout<<"Moniteur"<<endl<<endl;
Moniteur Mantor("GUIDIHOUNME" , "Antonin" , 'M', 34 , "Sègbeya", 97124431 ,1246443216, "g.jhospice@gmail.com" , "Fast", "Mathematique", " 1er année de thèse", "Les étudiants de la L2 Mia","Structure Algebrique");
Mantor.afficherpersonnex();
Mantor.afficherEtudiant();
Mantor.afficherMoniteur();
  return 0;
  }
/* on constate qu'on ne peut utiliser dans les methodes d'une classe dérivée un attribut defini < private > dans la classe mère ou dans la classe grande maman.
*/
