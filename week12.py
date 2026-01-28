class GISCourse:
    def __init__(self):
        self.code = "ENC222"
        self.name = "GIS"
        self.units = 8

class Student:
    def __init__(self, regNo, name, course):
        self.regNo = regNo
        self.name = name
        self.course = course

class RegistrationSystem:
    def __init__(self):
        self.students = []

    def register(self, student):
        self.students.append(student)

    def display(self):
        for s in self.students:
            print(s.regNo, s.name, s.course.code, s.course.name, s.course.units)

course = GISCourse()
reg = RegistrationSystem()

n = int(input("Enter number of students: "))

for _ in range(n):
    regNo, name = input("RegNo Name: ").split()
    reg.register(Student(regNo, name, course))

print("\nREGISTERED STUDENTS")
reg.display()

