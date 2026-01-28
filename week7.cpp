#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int age;
    int serviceYear;
    double salary;

public:
    // Parameterized Constructor
    Employee(std::string n, int a, int sy, double s) 
        : name(n), age(a), serviceYear(sy), salary(s) {}

    // Destructor
    ~Employee() {}

    // Accessors
    std::string getName() { return name; }
    int getAge() { return age; }
    int getServiceYear() { return serviceYear; }
    double getSalary() { return salary; }
};

int main() {
    Employee emp("John Surveyor", 30, 5, 55000.0);
    std::cout << "Staff: " << emp.getName() << " | Salary: " << emp.getSalary() << std::endl;
    return 0;
}