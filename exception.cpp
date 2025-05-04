// #include <bits/stdc++.h>
// using namespace std;

// void divide(int num1, int num2)
// {
//     cout << "Result: " << num1 / num2 << endl;
// }
// int main()
// {
//     try
//     {
//         divide(10, 0);
//     }
//     catch (int a)
//     {
//         cout << "Daanmmmmmmm you are coocked" << endl;
//     }
//     return 0;
// }





#include <iostream>
#include <stdexcept>

using namespace std;
int main()
{
    int num1, num2, result;
    cout << "Enter two numbers: "<<endl;
    cin >> num1>> num2;

    try
    {
        if (num2 == 0)
        {
            throw "damnnn";
        }
        else
        {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        }
    }
    catch (char const* somthing)
    {
        cout << "Arithmetic Exception: Division by zero" << endl;
        cout << "Please enter a non-zero denominator." << endl;
    }

    return 0;
}

// const* int      // pointer address of int is not constant and value is constant
// int * const     // pointer address of int is constant and value is not constant
// const int *     // pointer address of int is not constant and value is constant
