#include <string>
#include <iostream>
#include "course.h"

using namespace std ;

    Joueur::Joueur(std::string name, int score):_nomJoueur=name, {};

    std::string Joueur::getnomJoueur(){
        cout << "Le nom du joueur est" << nomJoueur << endl;
        return nomJoueur;
    }

    /*int meilleurscore(){
        meilleur = score[0];
        for (int i=0;i<2;i++){
            if(score[i]< score[i+1]){
                meilleur = score[i];
            }
        }
    }

    int gagnant(){
    }*/

    