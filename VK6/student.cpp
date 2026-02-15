#include "student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student(string n, int a)
{
    Name =n;
    Age = a;


}

string Student::getName()
{
    return Name;
}




void Student::setName( string &newName)
{
    Name = newName;


}

int Student::getAge()
{
    return Age;
}

void Student::setAge(int newAge)
{
    Age = newAge;


}

void Student::printStudentInfo()
{

    cout <<"name: " << Name << "age: " << Age <<endl;


}
