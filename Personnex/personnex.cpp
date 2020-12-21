#include "personnex.h"

using namespace std ;

Personnex::Personnex(string Nom , string Prenoms , char Sexe, int Age , string LieuDeNaissance ,long NumTel)
{
  nom=Nom;
  prenoms=Prenoms;
  sexe=Sexe;
  age=Age  ;
  lieuDeNaissance=LieuDeNaissance;
  numTel=NumTel;
}

Personnex::~Personnex()
{
}

 // les methodes
string Personnex::getnom()
 {
   return nom;
   }

   string Personnex::getprenoms()
 {
   return prenoms;
   }

  int Personnex::getage()
  {
   return age;
   }
   string Personnex::getlieuDeNaissance()
 {
   return lieuDeNaissance;
   }

 long Personnex::getnumTel()
  {
   return numTel;
  }

  void Personnex:: afficherpersonnex()
  {
   cout <<"Nom:"<<nom<<endl;
   cout <<"Prenoms:" <<prenoms<<endl;
   cout <<"Age:" <<age<<" ans" <<endl;
   cout <<"Lieu de naissance:" <<lieuDeNaissance<<endl;
   cout <<"numero de telephone: " << numTel<<endl;
  }
  char Personnex:: getsexe()
  {
   return sexe;
  }

