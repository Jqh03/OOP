#include "notifikaattori.h"
#include <iostream>

using namespace std;
Notifikaattori::Notifikaattori()
{
    cout << "notif konstructori" << endl;

}


void Notifikaattori::lisaa(Seuraaja* lisSeuraajatPtr)
{
    cout << "lis seur" << endl;
    if (lisSeuraajatPtr == nullptr) return;
    if (seuraajat == nullptr)
    {
        seuraajat = lisSeuraajatPtr;
        return;
    }
    lisSeuraajatPtr->next = seuraajat;
    seuraajat = lisSeuraajatPtr;

}

void Notifikaattori::poista(Seuraaja* poistSeuraajatPtr)
{
    cout << "poist seurj" << endl;
    if (poistSeuraajatPtr == nullptr) return;
    if (seuraajat == nullptr) return;
    if (seuraajat == poistSeuraajatPtr)
    {
        seuraajat = seuraajat->next;
        return;
    }
    Seuraaja* seurTempNext = seuraajat->next;
    Seuraaja* seurTempPrev = seuraajat;
    while (seurTempNext->next != nullptr)
    {
        if (seurTempNext == poistSeuraajatPtr)
        {
            seurTempPrev->next = seurTempNext->next;
            return;
        }
        seurTempPrev = seurTempNext->next;
        seurTempNext = seurTempNext->next;
    }
    if (seurTempNext == poistSeuraajatPtr)
    {
        seurTempPrev->next = nullptr;
    }

}

void Notifikaattori::tulosta()
{
    if(seuraajat == nullptr)
    {
        cout << "EI seuraajia" << endl;
        return;
    }
    Seuraaja* seurTempNext = seuraajat;
    while (seurTempNext->next != nullptr)
    {
        cout << seurTempNext->getNimi() <<endl;
        seurTempNext = seurTempNext->next;
    }
    cout << seurTempNext->getNimi() <<endl;
}

void Notifikaattori:: postita(string viesti)
{
    if(seuraajat == nullptr)
    {
        cout << "EI seuraajia" << endl;
        return;
    }
    Seuraaja* seurTempNext = seuraajat;
    while (seurTempNext->next != nullptr)
    {
        seurTempNext->paivitys(viesti);
        seurTempNext = seurTempNext->next;
    }
    seurTempNext->paivitys(viesti);

}
