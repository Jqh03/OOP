#include "game.h"
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int mN)
{
    std::cout <<"Peli luotu" << std::endl;
    maxNumber = mN;
}

Game::~Game()
{
    cout << "peli tuhoutuu" << endl;
}

void Game::play() {

    cout << "Peli" << endl;

    srand(std::time(0));
    randomNumber = (rand()%maxNumber)+1;  //otetaan jakojäännös, nyt pitäisi olla välillä 1-20
    cout << "maxNumber: " << maxNumber << endl << "randomNumber: " << randomNumber << endl;

    bool stayInLoop = true;
    while(stayInLoop)
    {
        cout<<"Give your guess between 1-20"<<maxNumber<<endl;
        cin>>playerGuess;
        numOfGuesses++;
        if(playerGuess == randomNumber)
        {
            cout<<"Arvasit oikein luku = "<<playerGuess<<endl;
            stayInLoop = false;
        }
        else if(playerGuess<randomNumber)
        {
            cout<<"Lukusi on liian pieni"<<endl;
        }
        else
        {
            cout<<"Lukusi on liian suuri"<<endl;
        }
    }
    // return numOfGuesses;
}

void Game::PrintGameResult()    {
    cout <<"Tulostus" << endl;
    cout << "Oikea luku: " << randomNumber << endl << "Arvausten määrä: " << numOfGuesses << endl;
}

