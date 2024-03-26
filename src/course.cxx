#include <iostream>
#include "./student.cxx"
using namespace std;

class Course{
    int courseId, credits;
    string courseName;
    float GPA;

    public:
        void get_courseId();
        void get_totalGPA();
        void get_credits();
        void set_credits();
};