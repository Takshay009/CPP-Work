#include <iostream>
using namespace std;

// if any pure virtual function is present in the class, then the class is known as an abstract class.
class shape
{
public:
    virtual void draw() = 0; // pure virtual function
};

class circle : public shape
{
public:
    void draw()
    {
        cout << "Drawing circle..." << endl;
    }
};

int main()
{
    circle c1;
    c1.draw();  // Drawing circle...

    return 0;
}