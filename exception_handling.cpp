#include <bits/stdc++.h>

using namespace std;

void divide(int num1, int num2)
{
    if (num2 == 0)
    {
        throw runtime_error("Arithematic Exception");
    }
    cout << "Result: " << num1 / num2 << endl;
}

int main()
{
    try
    {
        divide(5, 0);
    }
    catch (exception& msg)
    {
        cout<< msg.what() << endl;
    }

    return 0;
}