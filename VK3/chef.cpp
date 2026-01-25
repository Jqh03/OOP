#include "chef.h"
#include <iostream>
#include <cstddef>
#include <cstdlib>
using namespace std;

Chef::Chef(string chefName)
   : name(chefName)
{
cout <<"Rakennetaan Chef!" <<endl;
}

Chef::~Chef() {

    cout <<"Puretaan Chef!" <<endl;
}





int Chef::makeSalad(int aines)
{
    cout <<"Anna ainesten maara joilla tehdaan salaattia: " << endl;
    cin >> aines;

    int salaatit = aines /5;

    if (salaatit == 0)
    {
        cout << "Aineksia liian vahan, minimi ainesmaara on 5." << endl;
    } else
        {
        cout << "Tehtiin " <<salaatit <<" salaattia!" <<endl;
        }


    return salaatit;
}

int Chef::makeSoup(int aines)
{
    cout<<"Anna ainesten maara joilla tehdaan keittoa: " <<endl;
    cin >> aines;

    int keitto = aines /3;

    if (keitto == 0)
    {
        cout <<"Aineksia liian vahan, minimi maara on 3." <<endl;
    } else
        {
        cout << "Tehtiin " << keitto <<" salaattia!" <<endl;
    }
    return keitto;
}
ItalianChef::ItalianChef(string chefName)
    : Chef(chefName)
{
    cout <<"Rakennetaan italianChef!" <<endl;
}

ItalianChef::~ItalianChef()
{
    cout <<"Puretaan italianChef!" <<endl;
}
bool ItalianChef::askSecret(string pw,int f, int w)
{
    cout <<"Anna salainen salasana: ";
    cin >> pw;
    if (pw == password)
    {
        cout <<"Salasana oikein! voit nyt pyytää kokkia tekemaan pizzaa!"<<endl;
        cout <<"Anna jauhojen maara: ";
        cin >> f;
        cout <<"Anna veden maara: ";
        cin >> w;
        flour = f;
        water = w;
        makePizza();
        return true;
    }
    cout << "Vaara salasana" << endl;
    return false; }

int ItalianChef::makePizza()
{
    int pizza = min(flour /5, water /5);

    if (pizza == 0)
    {
        cout <<"Aineksia liian vahan, minimi maara molempia on 5." <<endl;
    } else
    {
        cout << "Tehtiin " << pizza <<" pizzaa!" <<endl;
    }
    return pizza;

}

void Chef::compare(int choice)
{
    if (choice == 1)
        makeSalad(0);
    else if(choice == 2)
        makeSoup(0);
}
void ItalianChef::compare(int choice)
{
    if (choice ==3) {

    } else {
        Chef::compare(choice);
    }
}

