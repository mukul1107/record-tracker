// student.h

#ifndef STUDENT_H
#define STUDENT_H

#include <windows.h>
#include <iostream>
#include <fstream>
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void txtRed()
{
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
}
void txtGreen()
{
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
}
void txtWhite()
{
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
}

class Student
{
private:
    string name, course;
    int id;

public:
    Student()
    {
        ;
    }
    Student(int stdId, string stdName, string cs)
    {
        id = stdId;
        name = stdName;
        course = cs;
    }
    void get_info()
    {
        cout << "Student's Name is: ";
        txtGreen();

        cout << name << endl;
        txtWhite();
        cout << "Student's ID is: ";

        txtGreen();
        cout << id << endl;
        cout << name;
        txtWhite();
        cout << " is registered in: " << course << "." << endl;
    }

    void set_info(int roll, string uName, string cour)
    {
        roll = id;
        name = uName;
        course = cour;

        ofstream studentData;
        studentData.open("data.txt", ios::app);

        studentData << name <<" " << course << " " << id << endl;
        studentData << "\n";
    }

    void get_academics()
    {
        ;
    }

    void delete_info(int studentId)
    {
        if (studentId != id)
        {
            cout << "Invalid ID\n";
        }
        else if (studentId == id)
        {
            id = 0;
        }
    }
};

#endif