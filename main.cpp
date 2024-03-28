#include <iostream>
#include <fstream>
#include <windows.h>
#include "src/course.h"
#include <cstdlib>
#include "src/student.h"
using namespace std;

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
void generateArt()
{
    std::ifstream inFile("space.txt");

    // Check if the file is opened successfully
    if (!inFile)
    {
        std::cerr << "Error: Unable to open the file!" << std::endl;
    }

    // Read and display the contents of the file
    txtGreen();
    std::string line;
    while (std::getline(inFile, line))
    {
        std::cout << line << std::endl;
    }

    // Close the file
    inFile.close();
    txtWhite();
}
int main()
{
    system("cls");
    generateArt();
    Sleep(5000);

    Student std[5];

    for (int i = 0; i < 5; i++)
    {
        string name, course;
        int id = rand();

        cout << "Enter the name of Student " << i + 1 << endl;
        cin >> name;
        cout << "Enter the Course of Student " << i + 1 << endl;
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
