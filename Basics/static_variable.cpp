#include <iostream>

using namespace std;

class A
{
    static int a;

public:
    void show()
    {
        cout << a << endl;
        a++;
    }
};

int A::a = 10;
int main()
{
    A obj;
    obj.show();
    obj.show();

    return 0;
}