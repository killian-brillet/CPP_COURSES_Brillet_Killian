#include <string>
#include <iostream>

using namespace std ;

    class Joueur{
    private:
        int nbcourse = 5;
        int nbtours = 3;
        std::string nomJoueur;
    public:
        std::string getnomJoueur();
        Course(std::string name, int score);
    };

    