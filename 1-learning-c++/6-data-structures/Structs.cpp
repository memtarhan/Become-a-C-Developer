#include <iostream>

using namespace std;

struct Student
{
    string name;
    float GPA;
};

int main()
{
    Student student;
    student.name = "Mehmet";
    student.GPA = 3.14;

    Student students[10];
    students[0] = student;
    
    return 0;
}
