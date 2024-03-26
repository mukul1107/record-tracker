#include <iostream>
#include "src/course.h"
#include "src/student.h"
using namespace std;

// extern class Student;
// extern class Course;

int main(){

    Student s1(427, "Damon", "BCA");
    Course c1(101,"BCA");


    c1.get_grades();


    return 0;
}

