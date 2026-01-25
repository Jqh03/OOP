#ifndef CHEF_H
#define CHEF_H
#include <string>

using namespace std;
class Chef
{
public:
    Chef(string chefName);
    ~Chef();
    int getName ();
    int makeSalad (int );
    int makeSoup (int aines);
    void compare(int choice);
protected:
    string name;

};


class ItalianChef : public Chef
{
    public:

    ItalianChef(string chefName);
        ~ItalianChef();

    bool askSecret(string pw, int flour, int water);



    private:
    string password = "pizza";
    int makePizza();
    int flour;
    int water;
    void compare(int choice);
};
#endif // CHEF_H
