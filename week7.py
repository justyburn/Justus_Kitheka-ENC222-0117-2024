class Employee:
    def __init__(self, name, age, service_year, salary):
        self._name = name
        self._age = age
        self._service_year = service_year
        self._salary = salary

    def __del__(self):
        pass

    # Accessors
    def get_name(self): return self._name
    def get_age(self): return self._age
    def get_service_year(self): return self._service_year
    def get_salary(self): return self._salary

emp = Employee("John Surveyor", 30, 5, 55000.0)
print(f"Staff: {emp.get_name()} | Salary: {emp.get_salary()}")