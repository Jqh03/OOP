#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game(int);
    ~Game();
    void play ();
    void PrintGameResult();
private:
    int maxNumber = 20;
    int playerGuess;
    int randomNumber = 0;
    int numOfGuesses = 0;

protected:
};

#endif // GAME_H
