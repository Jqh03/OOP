#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game();

int main () {
    int maara = game();

    cout << "arvausten maara:  " << maara <<    "\n";
    return 0;
}

int game()
{
    int arvottu, guess, maara = 0;


    srand (time(NULL));

    arvottu = rand() % 20 + 1;

    do {
        cout << "Arvaa numero 1 ja 20 valilta: ";
        cin >> guess;

        if (guess > arvottu) {
            cout << "Arvattu luku on liian iso!\n ";
            maara++;
        }

        else if   (guess < arvottu) {
            cout << "Arvattu luku on liian pieni!\n ";
            maara++;
        }
    }        while (guess != arvottu);
    cout << "Oikein!\n ";

    return maara;
}
