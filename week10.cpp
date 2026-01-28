#include <iostream>
#include <string>
#include <iomanip>

class Employee {
protected:
    std::string firstName;
    std::string initial;
    std::string lastName;

public:
    Employee(std::string fn, std::string init, std::string ln) 
        : firstName(fn), initial(init), lastName(ln) {}

    virtual void displayDetails() = 0;
    virtual double calculateWages() = 0;
    virtual ~Employee() {}
};

class SalaryEmployee : public Employee {
private:
    double monthlySalary;

public:
    SalaryEmployee(std::string fn, std::string init, std::string ln, double salary)
        : Employee(fn, init, ln), monthlySalary(salary) {}

    void displayDetails() override {
        std::cout << "Type: Salary | Name: " << firstName << " " << initial << ". " << lastName 
                  << " | Monthly Pay: $" << calculateWages() << std::endl;
    }

    double calculateWages() override { return monthlySalary; }
};

class HourlyEmployee : public Employee {
private:
    double hoursWorked;
    double hourlyRate;

public:
    HourlyEmployee(std::string fn, std::string init, std::string ln, double hours, double rate)
        : Employee(fn, init, ln), hoursWorked(hours), hourlyRate(rate) {}

    void displayDetails() override {
        std::cout << "Type: Hourly | Name: " << firstName << " " << initial << ". " << lastName 
                  << " | Total Pay: $" << calculateWages() << std::endl;
    }

    double calculateWages() override { return hoursWorked * hourlyRate; }
};

int main() {
    SalaryEmployee s_emp("John", "K", "Surveyor", 4500.00);
    HourlyEmployee h_emp("Jane", "A", "Analyst", 160.0, 25.0);

    s_emp.displayDetails();
    h_emp.displayDetails();

    return 0;
}