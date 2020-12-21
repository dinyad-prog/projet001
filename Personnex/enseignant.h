#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H

#include <personnex.h>


class Enseignant : public Personnex
{
      public:
            Enseignant(std::string Nom , std::string Prenoms , char Sexe, int Age , std::string LieuDeNaissance,long NumTel, std:: string Universite, std::string Email,long NumMatricule,std::string DiciplineEnseigner , int Ancienneter);
            virtual ~Enseignant();

            //les getter
            std::string getUniversite();
            std:: string getEmail();
            long getNumMatricule();
            std:: string getDiciplineEnseigner();
            int getAncienneter();
            void afficherEnseignant();
            void verifierEnseignantMemeDicipline( Enseignant nouv);

      protected:

      private:
      std:: string universite;
      std:: string email;
      long numMatricule;
      std:: string diciplineEnseigner;
      int ancienneter;
};

#endif // ENSEIGNANT_H
