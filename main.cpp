#include <iostream>
#include "src/course.h"
#include <cstdlib> 
#include "src/student.h"
using namespace std;


int main(){

    Student std[5];

    for(int i =0; i < 5; i++){
        string name, course;
        int id = rand();

        cout << "Enter the name of Student "<< i+1 << endl;
        cin >> name;
        cout << "Enter the Course of Student "<< i+1 << endl;
        cin >> course;
        std[i].set_info(id, name, course);
        
    }

    for (int i = 0; i < 5; i++)
    {
        std[i].get_info();
        cout << endl;
    }
    

    return 0;
}

