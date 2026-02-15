#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;
class Student
{
public:
    Student(string n, int a);

    string getName();
    void setAge(int newAge);
    void setName(string &newName);

    int getAge();
    void printStudentInfo();
private:
    string Name;
    int Age;

};

#endif // STUDENT_H
