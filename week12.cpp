#include <iostream>
#include <vector>
using namespace std;

class GISCourse {
public:
    string code, name;
    int units;

    GISCourse() : code("ENC222"), name("GIS"), units(8) {}
};

class Student {
public:
    string regNo, name;
    GISCourse* course;

    Student(string r, string n, GISCourse* c)
        : regNo(r), name(n), course(c) {}
};

class RegistrationSystem {
    vector<Student*> students;

public:
    void registerStudent(Student* s) {
        students.push_back(s);
    }

    void display() {
        for (auto s : students) {
            cout << s->regNo << " "
                 << s->name << " "
                 << s->course->code << " "
                 << s->course->name << " "
                 << s->course->units << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    GISCourse course;
    RegistrationSystem reg;
    vector<Student*> students;

    for (int i = 0; i < n; i++) {
        string regNo, sname;
        cout << "RegNo Name:\n";
        cin >> regNo >> sname;

        Student* s = new Student(regNo, sname, &course);
        students.push_back(s);
        reg.registerStudent(s);
    }

    cout << "\nREGISTERED STUDENTS\n";
    reg.display();

    return 0;
}

