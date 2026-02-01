#include "asiakas.h"
#include <iostream>
#include <string>
using namespace std;


Asiakas::Asiakas()
{
    cout << "Asiakas: olen defaultkonstruktorissa" << endl;

}

Asiakas::Asiakas(string name ,double lr) : kayttotili(nimi),luottotili(name, lr)
{
    cout << "Asiakas; Olen parametrikonstruktorissa" << endl;
    nimi = name;

}

bool Asiakas::tiliSiirto(double sum, Asiakas& kohde)
{ if (kayttotili.withdraw(sum))
    {
        kohde.kayttotili.deposit(sum);
        return true;
    }
    return false;
}

string Asiakas::getNimi()
{
    return nimi;

}
void Asiakas::showSaldo()
{
    cout <<"käyttötilin saldo: " <<kayttotili.getBalance() << endl;
    cout <<"luottotilin saldo: " <<luottotili.getBalance() << endl;

}

bool Asiakas::talletus(double sum)
{
    return kayttotili.deposit(sum);
    cout <<"Käyttötilille lisätty: " << sum << "euroa" <<endl;
}

bool Asiakas::nosto(double sum)
{
    return kayttotili.withdraw(sum);
    cout <<"Käyttötililtä otettu: " << sum << "euroa" << endl;
}

bool Asiakas::luotonMaksu(double sum)
{
    return kayttotili.deposit(sum);
    cout <<"Luotolle lisätty  " << sum << "euroa" << endl;
}

bool Asiakas::luotonNosto(double sum)
{
    return kayttotili.withdraw(sum);
    cout <<"Luotolla maksettu  " << sum << "euroa" << endl;
}


