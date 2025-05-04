// #include <bits/stdc++.h>

// using namespace std;

// class Complex
// {
// private:
//     double real;
//     double imag;

// public:
//     void setValue(double r, double i)
//     {
//         real = r;
//         imag = i;
//     }

//     Complex operator+(Complex other)
//     {
//         Complex temp;
//         temp.real = real + other.real;
//         temp.imag = imag + other.imag;
//         return temp;
//     }

//     void display()
//     {
//         cout << real << " + " << imag << "i" << endl;
//     }
// };

// int main()
// {
//     Complex c1, c2, c3;
//     c1.setValue(3.4,4.1);
//     c2.setValue(2.6,1.1);
//     c3 = c1 + c2;
//     c1.display();
//     c2.display();
//     c3.display();
//     return 0;
// }

// ---

#include <bits/stdc++.h>

using namespace std;

// class Complex
// {
// private:
//     double real;
//     double imag;

// public:
//     Complex(int r, int i)
//     {
//         real = r, imag = i;
//     }

//     Complex operator-(Complex obj)
//     {

//         return Complex(real - obj.real, imag - obj.imag);
//     }

//     void display()
//     {
//         cout << real << " - " << imag << endl;
//     }
// };

// int main()
// {
//     Complex c1(5, 2);
//     Complex c2(2, 1);
//     Complex c3 = c1 - c2;
//     c1.display();
//     c2.display();
//     c3.display();

//     return 0;
// }

class Complex
{
    int a, b;

    friend Complex operator+(Complex o1, Complex o2); // friend function declaration

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex operator+(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));  // (1+5) + (4+8)i = 6 + 12i
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = c1 + c2; // operator overloading  
    sum.printNumber();

    return 0;
}