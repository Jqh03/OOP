#include <iostream>
#include "notifikaattori.h"


using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    //return 0;

    Notifikaattori n;
    Seuraaja* s1 = new Seuraaja("Pena");
    Seuraaja* s2 = new Seuraaja("Raimo");
    Seuraaja* s3 = new Seuraaja("Lauri");

    n.tulosta();
    n.postita("Hei vaan!");
    n.poista(s2);

    n.lisaa(s1);
    n.lisaa(s2);
    n.lisaa(s3);
    n.tulosta();
    n.postita("haloo");

    n.poista(s2);
    n.tulosta();
    n.poista(s1);
    n.tulosta();
    n.poista(s3);
    n.tulosta();
    return 0;



}
