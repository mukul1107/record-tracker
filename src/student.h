#ifndef STUDENT_H
#define STUDENT_H

#include <windows.h>
#include <iostream>
#include <fstream>
#include "course.h"

class Student
{
private:
    string names[5];
    string courses[5];
    int ids[5];

    // Console color manipulation functions
    void txtRed()
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
    }

    void txtGreen()
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
    }

    void txtWhite()
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    }

public:
    // Default constructor
    Student() {}

    // Parameterized constructor
    Student(int stdId, string stdName, string cs)
    {
        // Initialize all elements of arrays to the same values
        for (int i = 0; i < 5; ++i) {
            ids[i] = stdId;
            names[i] = stdName;
            courses[i] = cs;
        }
    }

    void get_info()
    {
        txtGreen();
        cout << "Student Information:\n";
        txtWhite();
        for (int i = 0; i < 5; ++i) {
            cout << "Student " << i+1 << ":\n";
            txtGreen();
            cout << "Name: " << names[i] << endl;
            cout << "ID: " << ids[i] << endl;
            cout << "Course: " << courses[i] << endl;
            txtWhite();
            cout << endl;
        }
    }

    void set_info(int roll, string uName, string cour)
    {
        // Assign values to each element of the arrays
        for (int i = 0; i < 5; ++i) {
            ids[i] = roll;
            names[i] = uName;
            courses[i] = cour;
        }

        // Open the file in append mode
        ofstream studentData("data.txt", ios::app);
        if (studentData.is_open())
        {
            // Write data for each student to the file
            for (int i = 0; i < 5; ++i) {
                studentData << names[i] << " " << courses[i] << " " << ids[i] << endl;
            }
            studentData << endl;
            studentData.close();
        }
        else
        {
            cout << "Unable to open file!" << endl;
        }
    }

    void get_academics(Course *cs)
    {
        txtGreen();
        cout << "get_academics() is on development right now!\n";
        txtWhite();
        // for (int i = 0; i < 5; ++i) {
        //     cout << "Student " << i+1 << ":\n";
        //     for (int j = 0; j < 5; ++j) {
        //         cout << "Course: " << cs[j].getName() << endl;
        //         // Assuming get_grades() method returns a string
        //         cout << "Grades: " << cs[j].get_grades() << endl;
        //     }
        //     cout << endl;
        // }
    }

    void delete_info(int studentId)
    {
        for (int i = 0; i < 5; ++i) {
            if (studentId == ids[i])
            {
                // Set the ID to 0 to mark as deleted
                ids[i] = 0;
                break;  // Assuming each ID is unique, no need to continue the loop
            }
        }
    }
};

#endif
