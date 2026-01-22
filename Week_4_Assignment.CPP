#include <iostream>
using namespace std;

/*
Define a data structure
*/
struct Student
{
    int id;
    float marks;
    char grade;
};

int main()
{
    // Declare an array of Student structures
    Student students[3];

    for(int i = 0; i < 3; i++)
    {
        cout << "Enter student ID: ";
        cin >> students[i].id;

        cout << "Enter student marks: ";
        cin >> students[i].marks;

        /*
            Selection statement to determine grade
        */
        if(students[i].marks >= 70)
            students[i].grade = 'A';
        else if(students[i].marks >= 60)
            students[i].grade = 'B';
        else if(students[i].marks >= 50)
            students[i].grade = 'C';
        else
            students[i].grade = 'F';
    }

    // iteration
    cout << "\nStudent Records\n";
    for(int i = 0; i < 3; i++)
    {
        cout << "ID: " << students[i].id
        << " | Marks: " << students[i].marks
        << " | Grade: " << students[i].grade << endl;
    }

    return 0;
}
