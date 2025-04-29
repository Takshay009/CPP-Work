#include <iostream>

using namespace std;

class Employee
{
private:
    string name;
    int age;
    double salary;

public:
    void employee(int a)
    {
        age = a;
    }

    void employee(string n)
    {
        name = n;
    }
    void employee(double s)
    {
        salary = s;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    Employee e1;
    e1.employee("John bnega Don");
    e1.employee(25);
    e1.employee(50000.00);
    e1.display();
    return 0;
}