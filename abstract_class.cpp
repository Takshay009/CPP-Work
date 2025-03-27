#include <iostream>
using namespace std;

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