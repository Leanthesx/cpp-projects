#include <iostream>

using namespace std;

class Employee {
public:
    string name;
    int age;
    string department;
    int salary;

    Employee(string isim, int yas, string departman, int maas) {
        name = isim;
        age = yas;
        department = departman;
        salary = maas;
    }

    void ShowInfos() {
        cout << "Employee's name is " << name << endl;
        cout << "Employee's age is " << age << endl;
        cout << "Employee's department is " << department << endl;
        cout << "Employee's salary is " << salary << endl;
    }
};
int main()
{
    Employee employee1("Emre", 21, "GameDevelopment", 7200);
    employee1.ShowInfos();
}
