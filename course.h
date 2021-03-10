#include <string>
#include <iostream>

using namespace std ;

    class Joueur{
    private:
        int nbcourse = 5;
        int nbtours = 3;
        std::string _nomJoueur;
        int _score[3] = {20,30,40};
    public:
        std::string getnomJoueur();
        Joueur(std::string nom, int score);
        /*int meilleurscore();
        int gagnant();*/
    };

    