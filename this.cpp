#include <iostream>
using namespace std;

class Person
{
private:
    string name;

public:
    // Constructor
    Person(string name, int age)
    {
        // Using 'this' pointer to differentiate between class attributes and parameters
        // this point points to current object
        this->name = name;
    }

    // Display method
    void display()
    {
        cout << "Name: " << this->name << endl;
    }
};

int main()
{
    Person p1("John", 25);
    p1.display();

    return 0;
}
