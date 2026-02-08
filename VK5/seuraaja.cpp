#include "seuraaja.h"
#include <iostream>

using namespace std;

Seuraaja::Seuraaja()
{
    cout <<"Seuraaja konstruktori" << endl;

}

Seuraaja::Seuraaja(string aNimi)
{
    cout <<"Seuraaja parametri konstruktori" << endl;
    nimi = aNimi;
}


string Seuraaja::getNimi()
{
    cout << "getN" << endl;
    return (nimi);

}

void Seuraaja::paivitys(string viesti)
{
    cout << "paiv" << endl;
    cout << "Viesti" << viesti << endl;

}
