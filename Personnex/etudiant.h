#ifndef ETUDIANT_H
#define ETUDIANT_H

#include<iostream>
#include<string>

#include "personnex.h"


class Etudiant : public Personnex
{
      public:
          // public:

        Etudiant(std::string Nom , std::string Prenoms , char Sexe, int Age,std::string LieuDeNaissance,long NumTel, long NumMatricule , std::string Email , std:: string EntiterDetude, std::string Filiere, std:: string NiveauDetude); //constructeur par defaut

        virtual ~Etudiant(); //destructeur


            //les methodes
      long getNumMatricule();
      std:: string getEmail();
      std:: string getEntiterDetude();
      std:: string getFiliere();
      std:: string getNiveauDetude();
      void afficherEtudiant();
      void verifierEtudiantMemeEntiter(Etudiant nouv);
     std:: string entiterDetude;

      protected:

      private:

      long numMatricule;
      std:: string email;

      std:: string filiere;
      std:: string niveauDetude;
};
#endif
