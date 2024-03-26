// course.h

#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include "./student.h"
using namespace std;

class Course{
    int courseId, credits;
    string courseName;
    float grades[5];
    string subs[5] = {"C++", "DBMS", "Operating Systems","UI/UX","DSA"};
    public:

        Course(int id, string name){
            courseId = id;
            courseName = name;
        }

        void get_courseId(){
            int userId;
            cout << "Enter the course name :" << endl;
            cin >> userId;
            if (userId == courseId){
                cout << "Course name is: " << courseName; 
            }
        };
        void get_totalGPA();
        void get_grades(){
            cout << "Please enter the marks of specified subjects below." << endl;
            for(int i =0; i < 5; i++){
                cout << "Enter grades of " << subs[i] << endl;
                cin >> grades[i];
            }
        }
        void set_credits();
};

#endif