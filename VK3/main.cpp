#include "chef.h"
#include <iostream>

using namespace std;

int main()
{
    Chef c1("chef");
    ItalianChef c2("ItalianChef");

    int choice;
    cout << "Valitse toiminto:" << endl;
    cout << "1 = Tee salaatti" << endl;
    cout << "2 = Tee keitto" << endl;
    cout << "3 = tiedatko salaisen salasanan?" << endl;
    cout << "Valinta: ";
    cin >> choice;

    if (choice == 1) {
        c1.makeSalad(0);
    }
    else if (choice == 2) {
        c1.makeSoup(0);
    }
    else if (choice == 3) {
        c2.askSecret("", 0, 0);
    }
    else {
        cout << "Virheellinen valinta." << endl;
    }

    return 0;
}










