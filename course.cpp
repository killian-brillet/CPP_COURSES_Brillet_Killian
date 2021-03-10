#include <string>
#include <iostream>
#include "course.h"

using namespace std ;

    Joueur::Joueur(std::string name, int score){};

    std::string Joueur::getnomJoueur(){
        std::cout << "Le nom du joueur est" << nomJoueur << endl;
        return nomJoueur;
    }


    