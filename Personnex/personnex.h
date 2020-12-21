#ifndef PERSONNEX_H
#define PERSONNEX_H
#include<iostream>
#include <string>

class Personnex
{
      public:
      //les attributs

            Personnex(std::string Nom , std::string Prenoms , char Sexe, int Age , std::string LieuDeNaissance,long NumTel); // constructeur par defaut incluant les identités d'une personne

            virtual ~Personnex(); //destructeur



      //les getter
      std:: string getnom();
      std:: string getprenoms();
      int getage();
      std:: string getlieuDeNaissance();
      long getnumTel();
      void afficherpersonnex();
      char getsexe();

         std:: string nom;
      std:: string prenoms;

      protected:

      private:

      char sexe;
      int age;
      std:: string lieuDeNaissance;
      long numTel;
};

#endif // PERSONNEX_H
