#include <iostream>

using namespace std;

struct employee {
    string name;
    int age;
    string department;
    int salary;
};

int main()
{
    employee emp1 = { "Emre", 21, "GameDevelopment", 7200 };
    employee emp2 = { "Ayaz", 23, "CyberSecurity", 5500 };

    cout << "Employee1's name is " << emp1.name << endl;
    cout << "Employee1's age is " << emp1.age << endl;
    cout << "Employee1's department is " << emp1.department << endl;
    cout << "Employee1's salary is " << emp1.salary << endl;

    cout << "Employee2's name is " << emp2.name << endl;
    cout << "Employee2's age is " << emp2.age << endl;
    cout << "Employee2's department is " << emp2.department << endl;
    cout << "Employee2's salary is " << emp2.salary << endl;
}
