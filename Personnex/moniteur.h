#ifndef MONITEUR_H
#define MONITEUR_H

#include <etudiant.h>


class Moniteur : public Etudiant
{
      public:
            Moniteur(std::string Nom , std::string Prenoms , char Sexe, int Age,std::string LieuDeNaissance,long NumTel, long NumMatricule , std::string Email , std:: string EntiterDetude, std::string Filiere, std:: string NiveauDetude, std::string Group, std::string MatiereMantor); //constructeur par defaut);

            virtual ~Moniteur() ;//destructeur par defaut

            //les methodes
      std:: string getGroup();
      std:: string getMatiereMantor();
      void afficherMoniteur();

      protected:

      private:
      std:: string group;
      std::string matiereMantor;
};

#endif // RESPONSABLE_H
