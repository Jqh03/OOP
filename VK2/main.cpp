#include "game.h"
#include <iostream>

using namespace std;

int main()
{   int maxNum (20);
    Game peliOlio(maxNum);
    peliOlio.play();
    peliOlio.PrintGameResult();

    return 0;
}
