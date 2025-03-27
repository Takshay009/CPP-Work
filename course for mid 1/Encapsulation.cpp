#include <iostream>
using namespace std;

class Employee
{
private:
    string name;

public:
    // Setter methods to set private data
    void setName(string empName)
    {
        name = empName;
    }

    // Getter methods to access private data
    string getName()
    {
        return name;
    }
};

int main()
{
    /* here we use data hidding concept to hide the data from the user and
     we can access the data using the getter and setter methods*/
    Employee emp;

    // Setting values using setters
    emp.setName("John Doe");

    // Getting values using getters
    cout << "Employee Name: " << emp.getName() << endl;

    return 0;
}
