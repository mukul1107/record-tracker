#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
using namespace std;

class Course
{
private:
    int credits;
    string courseName;
    float grades[5];
    string subs[5] = {"C++", "DBMS", "Operating Systems", "UI/UX", "DSA"};

public:
    // Constructor
    Course(string name)
    {
        courseName = name;
    }

    // Accessor methods
    string getName() const
    {
        return courseName;
    }

    int getCredits() const
    {
        return credits;
    }

    // Method to check if a course is available in the syllabus
    void checkCourseAvailability() const
    {
        string courseID;
        bool isAvailable = false;
        cout << "Enter the course name: ";
        cin >> courseID;
        for (int i = 0; i < 5; i++)
        {
            if (courseID == subs[i])
            {
                isAvailable = true;
                break;
            }
        }

        if (isAvailable)
        {
            cout << courseID << " is Available in the Syllabus." << endl;
        }
        else
        {
            cout << "Unknown Course!" << endl;
        }
    }

    // Method to get grades of specified subjects
    void set_grades()
    {
        cout << "Please enter the marks of specified subjects below." << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter grades of " << subs[i] << ": ";
            cin >> grades[i];
        }
    }

    void get_grades(){
        
    }

    // Method to set credits for the course
    void set_credits(int credit)
    {
        credits = credit;
    }

    // Method to calculate total GPA for the course
    void get_totalGPA() const
    {
        float totalGrade = 0;
        for (int i = 0; i < 5; i++)
        {
            totalGrade += grades[i];
        }
        float averageGrade = totalGrade / 5;
        cout << "Total GPA for " << courseName << ": " << averageGrade << endl;
    }
};

#endif
