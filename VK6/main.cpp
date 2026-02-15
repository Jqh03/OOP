#include "student.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main ()
{
    int selection =0;
    vector<Student>studentList;
    int Ika;
    string sNimi;
    vector<Student>::iterator it = studentList.begin();
    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {

        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            cout << "Valinta 0" << endl;

            cout<<"Nimi: " <<endl;
            cin >> sNimi;
            cout << "Ika: " <<endl;
            cin >> Ika;
            studentList.emplace_back(sNimi,Ika);
            cout <<"Lisattiin " << sNimi
                 << " " << Ika << endl;
            break;
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout << "Valinta 1" << endl;
            cout << "Tulostetaan lista" << endl;
            for (auto it= studentList.begin(); it != studentList.end(); ++it) {
                cout << it->getName() << ": " << it->getName() << endl;

            }
            for (auto &s: studentList) {
                s.printStudentInfo();
            };
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout << "Valinta 2" << endl;
            cout << "Jarjestetaan nimet aakkosjarjestykseen" << endl;
            sort(studentList.begin(), studentList.end(), []( Student &a, Student &b){
                return a.getName() < b.getName();
            });
            for (auto &s: studentList) {
                s.printStudentInfo();
            };
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            cout << "Valinta 3" << endl;
            cout <<"Jarjestetaan ian mukaan" <<endl;
            sort(studentList.begin(), studentList.end(), []( Student &a, Student &b){
                return a.getAge() < b.getAge();

            });
            for (auto &s: studentList) {
                s.printStudentInfo();
            };
            break;
        case 4:
             cout << "Valinta 4" << endl;
            // Kysy käyttäjältä opiskelijan nimi
            cout<<"Nimi: " <<endl;
            cin >> sNimi;
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.


            find_if(studentList.begin(), studentList.end(), [sNimi]( Student &a){
                return a.getName() == sNimi;


            });



            if (it != studentList.end()) {
                cout << "Loytyi!" << endl;
                it->printStudentInfo();
            }
            else {
                cout <<"Ei loytynyt" << sNimi << "!!" << endl;

            }


            break;

        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
    }
}while(selection < 5);

return 0;
}
